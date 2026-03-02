import cv2
import numpy as np


class OldBoardLegacyDetector:
    """Legacy detector approximating oldboard_detection.py behavior.

    Strategy:
    - Canny on grayscale
    - HoughLines threshold sweep (high -> low)
    - Render infinite lines to mask
    - Build contours from mask and keep largest valid quadrilateral
    """

    def detect_corners_debug(self, image: np.ndarray):
        gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
        blur = cv2.GaussianBlur(gray, (5, 5), 0)
        edges = cv2.Canny(blur, 50, 150, apertureSize=3)

        h, w = gray.shape[:2]
        line_mask = np.zeros((h, w), dtype=np.uint8)
        lines_drawn = []

        corners = None
        contour_vis = cv2.cvtColor(line_mask, cv2.COLOR_GRAY2BGR)

        for threshold in range(220, 39, -10):
            line_mask.fill(0)
            lines_drawn = []

            lines = cv2.HoughLines(edges, 1, np.pi / 180, threshold)
            if lines is not None:
                for rho, theta in lines[:, 0]:
                    a = np.cos(theta)
                    b = np.sin(theta)
                    x0 = a * rho
                    y0 = b * rho
                    x1 = int(x0 + 2000 * (-b))
                    y1 = int(y0 + 2000 * a)
                    x2 = int(x0 - 2000 * (-b))
                    y2 = int(y0 - 2000 * a)
                    cv2.line(line_mask, (x1, y1), (x2, y2), 255, 2)
                    lines_drawn.append((x1, y1, x2, y2))

            contour_vis = cv2.cvtColor(line_mask, cv2.COLOR_GRAY2BGR)
            candidate = self._largest_quadrilateral(line_mask)
            if candidate is not None:
                corners = candidate
                pts = corners.astype(int)
                for i in range(4):
                    cv2.line(contour_vis, tuple(pts[i]), tuple(pts[(i + 1) % 4]), (0, 255, 0), 2)
                break

        debug = {
            "gray": gray,
            "clahe": gray,
            "edges": edges,
            "closed": line_mask,
            "lines": lines_drawn,
            "line_mask": line_mask,
            "contour_vis": contour_vis,
            "corners": corners,
        }
        return corners, debug

    def _largest_quadrilateral(self, binary_image: np.ndarray):
        contours, _ = cv2.findContours(binary_image, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
        best = None
        best_area = 0.0

        for cnt in contours:
            area = cv2.contourArea(cnt)
            if area < 12000:
                continue

            hull = cv2.convexHull(cnt)
            peri = cv2.arcLength(hull, True)
            approx = cv2.approxPolyDP(hull, 0.02 * peri, True)
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
