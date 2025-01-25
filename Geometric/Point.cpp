#include "Point.h"
#define _USE_MATH_DEFINES
#include <math.h>

Point::Point(double _x, double _y) : x(_x), y(_y) {}

void Point::move(double dx, double dy) {
    x += dx;
    y += dy;
}

void Point::rotate(double angle) {
    double rad = angle * M_PI / 180.0;
    double newX = x * cos(rad) - y * sin(rad);
    double newY = x * sin(rad) + y * cos(rad);
    x = newX;
    y = newY;
}