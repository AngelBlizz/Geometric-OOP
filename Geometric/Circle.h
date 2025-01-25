#pragma once
#include "Point.h"

class Circle {
private:
    Point center;
    double radius;

public:
    Circle(Point _center, double _radius);
    void move(double dx, double dy);
    void resize(double factor);
    void rotate(double angle);
    void print() const;
};
