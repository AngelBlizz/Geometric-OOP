#include "Circle.h"
#include <iostream>

Circle::Circle(Point _center, double _radius) : center(_center), radius(_radius) {}

void Circle::move(double dx, double dy) {
    center.move(dx, dy);
}

void Circle::resize(double factor) {
    radius *= factor;
}

void Circle::rotate(double angle) {
    center.rotate(angle);
}

void Circle::print() const {
    std::cout << "Круг: Центр(" << center.x << ", " << center.y << "), Радиус: " << radius << std::endl;
}