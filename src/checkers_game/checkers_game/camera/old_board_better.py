import cv2
import numpy as np


class OldBoardBetterDetector:
    """Old-style detector improved with Hough lines, then largest quadrilateral selection."""

    def __init__(self):
        self.clahe = cv2.createCLAHE(clipLimit=2.0, tileGridSize=(8, 8))

    def detect_corners_debug(self, image: np.ndarray):
        gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
        clahe = self.clahe.apply(gray)
        blur = cv2.GaussianBlur(clahe, (5, 5), 0)
        edges = cv2.Canny(blur, 50, 150)
        closed = cv2.morphologyEx(
            edges,
            cv2.MORPH_CLOSE,
            cv2.getStructuringElement(cv2.MORPH_RECT, (3, 3)),
            iterations=2,
        )

        lines = self._detect_lines(closed)
        line_mask = np.zeros_like(closed)
        for x1, y1, x2, y2 in lines:
            cv2.line(line_mask, (x1, y1), (x2, y2), 255, 2)

        # Connect line segments to build closed contour candidates
        line_mask = cv2.dilate(line_mask, cv2.getStructuringElement(cv2.MORPH_RECT, (5, 5)), iterations=1)
        line_mask = cv2.morphologyEx(
            line_mask,
            cv2.MORPH_CLOSE,
            cv2.getStructuringElement(cv2.MORPH_RECT, (7, 7)),
            iterations=1,
        )

        corners = self._largest_quadrilateral(line_mask)
        contour_vis = cv2.cvtColor(line_mask, cv2.COLOR_GRAY2BGR)
        if corners is not None:
            pts = corners.astype(int)
            for i in range(4):
                cv2.line(contour_vis, tuple(pts[i]), tuple(pts[(i + 1) % 4]), (0, 255, 0), 2)

        debug = {
            "gray": gray,
            "clahe": clahe,
            "edges": edges,
            "closed": closed,
            "lines": lines,
            "line_mask": line_mask,
            "contour_vis": contour_vis,
            "corners": corners,
        }
        return corners, debug

    def _detect_lines(self, edge_image: np.ndarray):
        h, w = edge_image.shape[:2]
        min_len = int(0.12 * max(h, w))
        lines = cv2.HoughLinesP(
            edge_image,
            rho=1,
            theta=np.pi / 180,
            threshold=80,
            minLineLength=min_len,
            maxLineGap=20,
        )
        if lines is None:
            return []
        return [tuple(map(int, l[0])) for l in lines]

    def _largest_quadrilateral(self, binary_image: np.ndarray):
        contours, _ = cv2.findContours(binary_image, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
        best = None
        best_area = 0.0

        for cnt in contours:
            area = cv2.contourArea(cnt)
            if area < 12000:
                continue
            peri = cv2.arcLength(cnt, True)
            approx = cv2.approxPolyDP(cnt, 0.02 * peri, True)
            if len(approx) != 4:
                # fallback through convex hull approximation
                hull = cv2.convexHull(cnt)
                peri_h = cv2.arcLength(hull, True)
                approx = cv2.approxPolyDP(hull, 0.02 * peri_h, True)
                if len(approx) != 4:
                    continue

            if area > best_area:
                best_area = area
                best = approx.reshape(4, 2).astype(np.float32)

        if best is None:
            return None
        return self._order_points(best)

    def _order_points(self, pts: np.ndarray) -> np.ndarray:
        rect = np.zeros((4, 2), dtype=np.float32)
        s = pts.sum(axis=1)
        rect[0] = pts[np.argmin(s)]
        rect[2] = pts[np.argmax(s)]
        diff = np.diff(pts, axis=1)
        rect[1] = pts[np.argmin(diff)]
        rect[3] = pts[np.argmax(diff)]
        return rect
