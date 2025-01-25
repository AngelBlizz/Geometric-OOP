#pragma once

class Point {
public:
    double x, y;

    Point(double _x = 0, double _y = 0);
    void move(double dx, double dy);
    void rotate(double angle);
};
