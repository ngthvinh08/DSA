#include <iostream>
class Point {
public:
    double x, y;
    Point(double x = 0, double y = 0) : x(x), y(y) {}
};
class Line {
public:
    Point p1, p2;
    Line(const Point& p1, const Point& p2) : p1(p1), p2(p2) {}
    bool hasIntersection(const Line& other, Point& intersectionPoint) const {
        double x1 = p1.x, y1 = p1.y;
        double x2 = p2.x, y2 = p2.y;
        double x3 = other.p1.x, y3 = other.p1.y;
        double x4 = other.p2.x, y4 = other.p2.y;
        double denominator = (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4);
        if (denominator == 0) {
            if (isOnLine(other.p1) || isOnLine(other.p2)) {
                intersectionPoint = other.p1;
                return true;
            } else if (other.isOnLine(p1) || other.isOnLine(p2)) {
                intersectionPoint = p1;
                return true;
            } else {
                return false;
            }
        }

        double intersectX = ((x1 * y2 - y1 * x2) * (x3 - x4) - (x1 - x2) * (x3 * y4 - y3 * x4)) / denominator;
        double intersectY = ((x1 * y2 - y1 * x2) * (y3 - y4) - (y1 - y2) * (x3 * y4 - y3 * x4)) / denominator;

        intersectionPoint.x = intersectX;
        intersectionPoint.y = intersectY;

        return true;
    }

    bool isOnLine(const Point& p) const {
        return (p.x >= std::min(p1.x, p2.x) && p.x <= std::max(p1.x, p2.x) &&
                p.y >= std::min(p1.y, p2.y) && p.y <= std::max(p1.y, p2.y));
    }
};

int main() {
    Point pointA, pointB, pointC, pointD;
    std::cin >> pointA.x >> pointA.y;
    std::cin >> pointB.x >> pointB.y;
    std::cin >> pointC.x >> pointC.y;
    std::cin >> pointD.x >> pointD.y;

    Line lineAB(pointA, pointB);
    Line lineCD(pointC, pointD);

    Point intersectionPoint;

    if (lineAB.hasIntersection(lineCD, intersectionPoint)) {
        std::cout << intersectionPoint.x << " " << intersectionPoint.y << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
