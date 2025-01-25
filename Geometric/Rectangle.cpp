#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(Point _topLeft, double _width, double _height) : topLeft(_topLeft), width(_width), height(_height) {}

void Rectangle::move(double dx, double dy) {
    topLeft.move(dx, dy);
}

void Rectangle::resize(double factor) {
    width *= factor;
    height *= factor;
}

void Rectangle::rotate(double angle) {
    topLeft.rotate(angle);
}

void Rectangle::print() const {
    std::cout << "Прямоугольник: Верхний левый угол(" << topLeft.x << ", " << topLeft.y << "), Ширина: " << width << ", Высота: " << height << std::endl;
}