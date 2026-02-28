import math
from dataclasses import dataclass
from typing import Dict, List, Optional, Tuple

import cv2
import numpy as np


@dataclass
class DetectedGrid:
    corners: np.ndarray  # shape (4, 2), float32 ordered TL, TR, BR, BL
    intersections: List[Tuple[int, int]]
    vertical_lines: List[Tuple[int, int, int, int]]
    horizontal_lines: List[Tuple[int, int, int, int]]


class GridCornerDetector:
    """Detect board corners from a single image using line clustering and intersections.

    Steps:
        1) Preprocess (grayscale, CLAHE, blur, Canny, morphology) to highlight lines.
        2) Probabilistic Hough to get line segments.
        3) Cluster line angles into two dominant families (~orthogonal).
        4) Intersect the two families to get a grid; outer hull gives board corners.
    """

    def __init__(self):
        self.clahe = cv2.createCLAHE(clipLimit=2.0, tileGridSize=(8, 8))
        self.parallel_angle_tolerance_deg = 18.0
        self.spacing_tolerance_ratio = 0.90
        self.target_grid_lines = 9
        self.min_required_family_lines = 7
        self.merge_angle_tolerance_deg = 4.0
        self.merge_distance_tolerance_px = 6.0

    def detect_corners(self, image: np.ndarray) -> Optional[DetectedGrid]:
        result, _ = self._run_pipeline(image)
        return result

    def detect_corners_debug(self, image: np.ndarray):
        """Same as detect_corners, but also returns intermediate debug artifacts."""
        return self._run_pipeline(image)

    def _run_pipeline(self, image: np.ndarray):
        gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
        clahe_img = self.clahe.apply(gray)
        blurred = cv2.GaussianBlur(clahe_img, (5, 5), 0)
        edges = cv2.Canny(blurred, 50, 150, apertureSize=3)
        kernel = cv2.getStructuringElement(cv2.MORPH_RECT, (3, 3))
        closed = cv2.morphologyEx(edges, cv2.MORPH_CLOSE, kernel, iterations=2)

        raw_lines = self._detect_lines(closed)
        lines = self._merge_collinear_segments(raw_lines, image.shape[:2]) if raw_lines else []
        selected_a = []
        selected_b = []
        intersections = []
        corners = None
        family_stats: Dict[str, Dict[str, float]] = {}

        if lines:
            families = self._cluster_lines(lines)
            if families is not None:
                family_a, family_b = families
                selected_a, stats_a = self._select_grid_lines(family_a)
                selected_b, stats_b = self._select_grid_lines(family_b)
                family_stats["family_a"] = stats_a
                family_stats["family_b"] = stats_b

                if len(selected_a) >= self.min_required_family_lines and len(selected_b) >= self.min_required_family_lines:
                    # Prefer 9 lines, but allow fewer when pieces/lighting hide some lines.
                    selected_a = selected_a[: self.target_grid_lines]
                    selected_b = selected_b[: self.target_grid_lines]

                    intersections = self._intersections(selected_a, selected_b, image.shape[:2])
                    corners = self._corners_from_extreme_lines(selected_a, selected_b)

        result = None
        if corners is not None and len(intersections) >= 16:
            result = DetectedGrid(
                corners=corners,
                intersections=intersections,
                vertical_lines=selected_a,
                horizontal_lines=selected_b,
            )

        debug = {
            "gray": gray,
            "clahe": clahe_img,
            "blurred": blurred,
            "edges": edges,
            "closed": closed,
            "all_lines": raw_lines,
            "merged_lines": lines,
            "vertical_lines": selected_a,
            "horizontal_lines": selected_b,
            "intersections": intersections,
            "corners": corners,
            "family_stats": family_stats,
        }
        return result, debug

    # --- pipeline steps ---

    def _preprocess(self, image: np.ndarray) -> np.ndarray:
        gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
        clahe = self.clahe.apply(gray)
        blurred = cv2.GaussianBlur(clahe, (5, 5), 0)
        edges = cv2.Canny(blurred, 50, 150, apertureSize=3)

        # Close small gaps to make lines continuous
        kernel = cv2.getStructuringElement(cv2.MORPH_RECT, (3, 3))
        closed = cv2.morphologyEx(edges, cv2.MORPH_CLOSE, kernel, iterations=2)
        return closed

    def _detect_lines(self, edge_image: np.ndarray) -> List[Tuple[int, int, int, int]]:
        h, w = edge_image.shape[:2]
        min_len = int(0.12 * max(h, w))  # adapt to resolution
        lines = cv2.HoughLinesP(
            edge_image,
            rho=1,
            theta=np.pi / 180,
            threshold=120,
            minLineLength=min_len,
            maxLineGap=12,
        )
        if lines is None:
            return []
        return [tuple(map(int, line[0])) for line in lines]

    def _cluster_lines(self, lines: List[Tuple[int, int, int, int]]):
        """Split lines into two dominant orientation families using k-means on doubled angle."""
        if len(lines) < 4:
            return None

        angles = np.array([self._line_angle_deg(line) for line in lines], dtype=np.float32)

        # Orientation-aware feature: theta and theta+180 are the same line direction.
        doubled = np.deg2rad(angles * 2.0)
        features = np.column_stack((np.cos(doubled), np.sin(doubled))).astype(np.float32)

        criteria = (cv2.TERM_CRITERIA_EPS + cv2.TERM_CRITERIA_MAX_ITER, 40, 0.01)
        _compactness, labels, _centers = cv2.kmeans(features, 2, None, criteria, 8, cv2.KMEANS_PP_CENTERS)

        families = ([], [])
        for line, lbl in zip(lines, labels.flatten().tolist()):
            families[int(lbl)].append(line)

        # Ensure both groups present
        v_lines, h_lines = families
        if len(v_lines) < 2 or len(h_lines) < 2:
            return None

        v_lines = self._sort_family_by_position(v_lines)
        h_lines = self._sort_family_by_position(h_lines)
        return v_lines, h_lines

    def _select_grid_lines(self, lines: List[Tuple[int, int, int, int]]):
        """Keep near-parallel lines and select a robust lattice-consistent subset."""
        if len(lines) < self.min_required_family_lines:
            return [], {"count": 0.0, "input_count": float(len(lines)), "mean_gap": -1.0, "std_gap": -1.0}

        angles = np.array([self._line_angle_deg(l) for l in lines], dtype=np.float32)
        median_angle = float(np.median(angles))

        # Keep near-parallel lines with adaptive tolerance (perspective introduces angle spread).
        angle_dist = np.array([self._angle_distance(float(a), median_angle) for a in angles], dtype=np.float32)
        mad = float(np.median(np.abs(angle_dist - np.median(angle_dist))))
        adaptive_tol = max(self.parallel_angle_tolerance_deg, 3.0 * mad + 2.0)

        # Keep only near-parallel lines
        parallel = [
            line
            for line, angle in zip(lines, angles)
            if self._angle_distance(float(angle), median_angle) <= adaptive_tol
        ]

        if len(parallel) < self.min_required_family_lines:
            return [], {
                "count": 0.0,
                "input_count": float(len(lines)),
                "parallel_count": float(len(parallel)),
                "mean_gap": -1.0,
                "std_gap": -1.0,
                "median_angle": median_angle,
                "adaptive_tol": adaptive_tol,
            }

        # Build normal direction for line-position measurements
        angle_rad = math.radians(median_angle)
        normal = np.array([-math.sin(angle_rad), math.cos(angle_rad)], dtype=np.float32)

        with_pos = []
        for line in parallel:
            x1, y1, x2, y2 = line
            midpoint = np.array([(x1 + x2) * 0.5, (y1 + y2) * 0.5], dtype=np.float32)
            position = float(np.dot(midpoint, normal))
            with_pos.append((line, position))

        # Deduplicate very close lines (same board line detected multiple times)
        with_pos.sort(key=lambda item: item[1])
        deduped = []
        min_sep = 6.0
        for line, pos in with_pos:
            if not deduped or abs(pos - deduped[-1][1]) > min_sep:
                deduped.append((line, pos))
            else:
                # keep longer line
                old_line = deduped[-1][0]
                if self._line_length(line) > self._line_length(old_line):
                    deduped[-1] = (line, pos)

        if len(deduped) < self.min_required_family_lines:
            return [], {
                "count": 0.0,
                "input_count": float(len(lines)),
                "parallel_count": float(len(parallel)),
                "dedup_count": float(len(deduped)),
                "mean_gap": -1.0,
                "std_gap": -1.0,
                "median_angle": median_angle,
                "adaptive_tol": adaptive_tol,
            }

        # Lattice snapping: infer pitch from positions and keep one line per snapped index.
        dedup_positions = np.array([d[1] for d in deduped], dtype=np.float32)
        gaps = np.diff(dedup_positions)
        positive_gaps = gaps[gaps > 0]
        if len(positive_gaps) == 0:
            return [], {
                "count": 0.0,
                "input_count": float(len(lines)),
                "parallel_count": float(len(parallel)),
                "dedup_count": float(len(deduped)),
                "mean_gap": -1.0,
                "std_gap": -1.0,
                "median_angle": median_angle,
                "adaptive_tol": adaptive_tol,
            }

        base_pitch = float(np.median(positive_gaps))
        candidate_pitches = [base_pitch]
        candidate_pitches.append(max(2.0, base_pitch * 0.85))
        candidate_pitches.append(base_pitch * 1.15)

        best_lines = []
        best_mean = -1.0
        best_std = -1.0
        best_score = float("inf")

        for pitch in candidate_pitches:
            for anchor in dedup_positions:
                index_map: Dict[int, Tuple[Tuple[int, int, int, int], float, float]] = {}
                errors = []

                for line, pos in deduped:
                    idx = int(round((pos - float(anchor)) / pitch))
                    snapped = float(anchor) + idx * pitch
                    err = abs(pos - snapped)
                    length = self._line_length(line)

                    existing = index_map.get(idx)
                    if existing is None or err < existing[1] or (abs(err - existing[1]) < 1e-6 and length > existing[2]):
                        index_map[idx] = (line, err, length)

                if len(index_map) < self.min_required_family_lines:
                    continue

                sorted_items = sorted(index_map.items(), key=lambda kv: kv[0])
                items = [item[1] for item in sorted_items]
                lines_for_anchor = [it[0] for it in items]
                errs_for_anchor = np.array([it[1] for it in items], dtype=np.float32)

                # If too many lines, keep best target_grid_lines by local window on indices.
                if len(lines_for_anchor) > self.target_grid_lines:
                    best_window = None
                    best_window_score = float("inf")
                    for start in range(0, len(items) - self.target_grid_lines + 1):
                        window = items[start : start + self.target_grid_lines]
                        w_err = np.array([w[1] for w in window], dtype=np.float32)
                        w_len = float(sum(w[2] for w in window))
                        w_score = float(np.mean(w_err)) - 0.0001 * w_len
                        if w_score < best_window_score:
                            best_window_score = w_score
                            best_window = window
                    if best_window is not None:
                        lines_for_anchor = [w[0] for w in best_window]
                        errs_for_anchor = np.array([w[1] for w in best_window], dtype=np.float32)

                mean_err = float(np.mean(errs_for_anchor))
                std_err = float(np.std(errs_for_anchor))
                total_length = float(sum(self._line_length(line) for line in lines_for_anchor))
                score = mean_err + 0.5 * std_err - 0.00015 * total_length

                if score < best_score:
                    best_score = score
                    best_lines = lines_for_anchor
                    best_mean = mean_err
                    best_std = std_err

        if not best_lines:
            return [], {
                "count": 0.0,
                "input_count": float(len(lines)),
                "parallel_count": float(len(parallel)),
                "dedup_count": float(len(deduped)),
                "mean_gap": -1.0,
                "std_gap": -1.0,
                "median_angle": median_angle,
                "adaptive_tol": adaptive_tol,
            }

        best_lines = self._sort_family_by_position(best_lines)
        return best_lines, {
            "count": float(len(best_lines)),
            "input_count": float(len(lines)),
            "parallel_count": float(len(parallel)),
            "dedup_count": float(len(deduped)),
            "mean_gap": best_mean,
            "std_gap": best_std,
            "median_angle": median_angle,
            "adaptive_tol": adaptive_tol,
        }

    def _intersections(self, v_lines, h_lines, shape) -> List[Tuple[int, int]]:
        h, w = shape
        points = []
        for vx1, vy1, vx2, vy2 in v_lines:
            for hx1, hy1, hx2, hy2 in h_lines:
                pt = self._line_intersection((vx1, vy1, vx2, vy2), (hx1, hy1, hx2, hy2))
                if pt is None:
                    continue
                x, y = pt
                if 0 <= x < w and 0 <= y < h:
                    points.append((int(x), int(y)))
        return points

    def _outer_corners_from_points(self, points: List[Tuple[int, int]]) -> Optional[np.ndarray]:
        pts = np.array(points, dtype=np.float32)
        if len(pts) < 4:
            return None

        # Use minAreaRect to get a stable bounding quad
        rect = cv2.minAreaRect(pts)
        box = cv2.boxPoints(rect)  # returns 4 points
        box = np.array(box, dtype=np.float32)
        return self._order_points(box)

    def _corners_from_extreme_lines(self, family_a, family_b) -> Optional[np.ndarray]:
        if len(family_a) < 2 or len(family_b) < 2:
            return None

        family_a = self._sort_family_by_position(family_a)
        family_b = self._sort_family_by_position(family_b)

        a0, a8 = family_a[0], family_a[-1]
        b0, b8 = family_b[0], family_b[-1]

        p1 = self._line_intersection(a0, b0)
        p2 = self._line_intersection(a8, b0)
        p3 = self._line_intersection(a8, b8)
        p4 = self._line_intersection(a0, b8)

        if p1 is None or p2 is None or p3 is None or p4 is None:
            return None

        corners = np.array([p1, p2, p3, p4], dtype=np.float32)
        return self._order_points(corners)

    # --- helpers ---

    def _order_points(self, pts: np.ndarray) -> np.ndarray:
        """Order points as TL, TR, BR, BL based on sums/diffs."""
        rect = np.zeros((4, 2), dtype=np.float32)

        s = pts.sum(axis=1)
        rect[0] = pts[np.argmin(s)]  # TL
        rect[2] = pts[np.argmax(s)]  # BR

        diff = np.diff(pts, axis=1)
        rect[1] = pts[np.argmin(diff)]  # TR
        rect[3] = pts[np.argmax(diff)]  # BL
        return rect

    def _angle_distance(self, a, b):
        d = abs(a - b) % 180.0
        return min(d, 180.0 - d)

    def _line_intersection(self, line1, line2):
        x1, y1, x2, y2 = line1
        x3, y3, x4, y4 = line2

        denom = (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4)
        if denom == 0:
            return None

        px = ((x1 * y2 - y1 * x2) * (x3 - x4) - (x1 - x2) * (x3 * y4 - y3 * x4)) / denom
        py = ((x1 * y2 - y1 * x2) * (y3 - y4) - (y1 - y2) * (x3 * y4 - y3 * x4)) / denom
        return px, py

    def _line_angle_deg(self, line: Tuple[int, int, int, int]) -> float:
        x1, y1, x2, y2 = line
        angle = math.degrees(math.atan2(y2 - y1, x2 - x1))
        return angle + 180.0 if angle < 0 else angle

    def _line_length(self, line: Tuple[int, int, int, int]) -> float:
        x1, y1, x2, y2 = line
        return float(math.hypot(x2 - x1, y2 - y1))

    def _sort_family_by_position(self, lines: List[Tuple[int, int, int, int]]) -> List[Tuple[int, int, int, int]]:
        if not lines:
            return lines
        angles = np.array([self._line_angle_deg(l) for l in lines], dtype=np.float32)
        median_angle = float(np.median(angles))
        angle_rad = math.radians(median_angle)
        normal = np.array([-math.sin(angle_rad), math.cos(angle_rad)], dtype=np.float32)

        def line_position(line):
            x1, y1, x2, y2 = line
            midpoint = np.array([(x1 + x2) * 0.5, (y1 + y2) * 0.5], dtype=np.float32)
            return float(np.dot(midpoint, normal))

        return sorted(lines, key=line_position)

    def _merge_collinear_segments(self, lines: List[Tuple[int, int, int, int]], shape) -> List[Tuple[int, int, int, int]]:
        """Merge short line fragments that belong to the same underlying line.

        Grouping logic:
            - similar orientation (angle tolerance)
            - close normal distance (rho in normal form)
        Then each group is converted to one long clipped segment across image bounds.
        """
        if len(lines) < 2:
            return lines

        h, w = shape
        image_diag = float(math.hypot(w, h))

        params = []
        for line in lines:
            x1, y1, x2, y2 = line
            angle = self._line_angle_deg(line)
            angle_rad = math.radians(angle)
            direction = np.array([math.cos(angle_rad), math.sin(angle_rad)], dtype=np.float32)
            normal = np.array([-direction[1], direction[0]], dtype=np.float32)
            midpoint = np.array([(x1 + x2) * 0.5, (y1 + y2) * 0.5], dtype=np.float32)
            rho = float(np.dot(midpoint, normal))
            params.append((line, angle, direction, normal, rho))

        groups: List[List[Tuple[Tuple[int, int, int, int], float, np.ndarray, np.ndarray, float]]] = []
        for item in params:
            line, angle, _, _, rho = item
            placed = False

            for group in groups:
                group_angles = [g[1] for g in group]
                group_rhos = [g[4] for g in group]
                mean_angle = float(np.median(group_angles))
                mean_rho = float(np.median(group_rhos))

                if self._angle_distance(angle, mean_angle) <= self.merge_angle_tolerance_deg and abs(rho - mean_rho) <= self.merge_distance_tolerance_px:
                    group.append(item)
                    placed = True
                    break

            if not placed:
                groups.append([item])

        merged = []
        for group in groups:
            if len(group) == 1:
                merged.append(group[0][0])
                continue

            group_angles = [g[1] for g in group]
            group_rhos = [g[4] for g in group]
            avg_angle = float(np.median(group_angles))
            avg_rho = float(np.median(group_rhos))

            angle_rad = math.radians(avg_angle)
            direction = np.array([math.cos(angle_rad), math.sin(angle_rad)], dtype=np.float32)
            normal = np.array([-direction[1], direction[0]], dtype=np.float32)

            # Point on infinite line in normal form: n.x = rho
            p0 = normal * avg_rho
            p1 = p0 - direction * image_diag
            p2 = p0 + direction * image_diag

            pt1 = (int(round(float(p1[0]))), int(round(float(p1[1]))))
            pt2 = (int(round(float(p2[0]))), int(round(float(p2[1]))))

            ok, c1, c2 = cv2.clipLine((0, 0, w, h), pt1, pt2)
            if ok:
                merged.append((c1[0], c1[1], c2[0], c2[1]))

        return merged if merged else lines


def warp_board(image: np.ndarray, corners: np.ndarray, size: int = 800) -> np.ndarray:
    """Warp image to a square top-down board view using detected corners."""
    dst = np.array([[0, 0], [size, 0], [size, size], [0, size]], dtype=np.float32)
    matrix = cv2.getPerspectiveTransform(corners.astype(np.float32), dst)
    return cv2.warpPerspective(image, matrix, (size, size))
