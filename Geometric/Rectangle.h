#pragma once

#include "Point.h"

class Rectangle {
private:
    Point topLeft;
    double width, height;

public:
    Rectangle(Point _topLeft, double _width, double _height);
    void move(double dx, double dy);
    void resize(double factor);
    void rotate(double angle);
    void print() const;
};
