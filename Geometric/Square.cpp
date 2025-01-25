#include "Square.h"
#include <iostream>

Square::Square(Point _topLeft, double _side) : topLeft(_topLeft), side(_side) {}

void Square::move(double dx, double dy) {
    topLeft.move(dx, dy);
}

void Square::resize(double factor) {
    side *= factor;
}

void Square::rotate(double angle) {
    topLeft.rotate(angle);
}

void Square::print() const {
    std::cout << "Квадрат: Верхний левый угол(" << topLeft.x << ", " << topLeft.y << "), Размер: " << side << std::endl;
}