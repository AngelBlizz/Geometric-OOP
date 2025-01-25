#pragma once

#include "Point.h"

class Square {
private:
    Point topLeft;
    double side;

public:
    Square(Point _topLeft, double _side);
    void move(double dx, double dy);
    void resize(double factor);
    void rotate(double angle);
    void print() const;
};