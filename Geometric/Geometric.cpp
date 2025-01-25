#include <iostream>
#include <vector>
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"

void printMenu() {
    std::cout << "1. Создать круг\n";
    std::cout << "2. Создать квадрат\n";
    std::cout << "3. Создать прямоугольник\n";
    std::cout << "4. Подвинуть фигуру\n";
    std::cout << "5. Изменить размер фигуры\n";
    std::cout << "6. Повернуть фигуру\n";
    std::cout << "7. Вывести все фигуры\n";
    std::cout << "8. Выход\n";
}

int main() {
    setlocale(LC_CTYPE, "rus");
    std::vector<Circle> circles;
    std::vector<Square> squares;
    std::vector<Rectangle> rectangles;

    int choice;
    do {
        printMenu();
        std::cout << "Введите число: ";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            double x, y, radius;
            std::cout << "Введите координаты (x y): ";
            std::cin >> x >> y;
            std::cout << "Введите радиус: ";
            std::cin >> radius;
            circles.emplace_back(Point(x, y), radius);
            break;
        }
        case 2: {
            double x, y, side;
            std::cout << "Введите координаты верхнего левого угла(x y): ";
            std::cin >> x >> y;
            std::cout << "Введите длину стороны: ";
            std::cin >> side;
            squares.emplace_back(Point(x, y), side);
            break;
        }
        case 3: {
            double x, y, width, height;
            std::cout << "Введите координаты верхнего левого угла (x y): ";
            std::cin >> x >> y;
            std::cout << "Введите ширину: ";
            std::cin >> width;
            std::cout << "Введите длину: ";
            std::cin >> height;
            rectangles.emplace_back(Point(x, y), width, height);
            break;
        }
        case 4: {
            int figureType, index;
            double dx, dy;
            std::cout << "Введите тип фигуры (1 - Круг, 2 - Квадрат, 3 - Прямоугольник): ";
            std::cin >> figureType;
            std::cout << "Введите индекс фигуры: ";
            std::cin >> index;
            std::cout << "Введите смещение (dx dy):";
            std::cin >> dx >> dy;

            if (figureType == 1 && index < circles.size()) {
                circles[index].move(dx, dy);
            }
            else if (figureType == 2 && index < squares.size()) {
                squares[index].move(dx, dy);
            }
            else if (figureType == 3 && index < rectangles.size()) {
                rectangles[index].move(dx, dy);
            }
            else {
                std::cout << "Недопустимый тип фигуры или индекс!\n";
            }
            break;
        }
        case 5: {
            int figureType, index;
            double factor;
            std::cout << "Введите тип фигуры (1 - Круг, 2 - Квадрат, 3 - Прямоугольник): ";
            std::cin >> figureType;
            std::cout << "Введите индекс фигуры: ";
            std::cin >> index;
            std::cout << "Введите новый размер: ";
            std::cin >> factor;

            if (figureType == 1 && index < circles.size()) {
                circles[index].resize(factor);
            }
            else if (figureType == 2 && index < squares.size()) {
                squares[index].resize(factor);
            }
            else if (figureType == 3 && index < rectangles.size()) {
                rectangles[index].resize(factor);
            }
            else {
                std::cout << "Недопустимый тип фигуры или индекс!\n";
            }
            break;
        }
        case 6: {
            int figureType, index;
            double angle;
            std::cout << "Введите тип фигуры (1 - Круг, 2 - Квадрат, 3 - Прямоугольник): ";
            std::cin >> figureType;
            std::cout << "Введите индекс фигуры: ";
            std::cin >> index;
            std::cout << "Введите угол поворота: ";
            std::cin >> angle;

            if (figureType == 1 && index < circles.size()) {
                circles[index].rotate(angle);
            }
            else if (figureType == 2 && index < squares.size()) {
                squares[index].rotate(angle);
            }
            else if (figureType == 3 && index < rectangles.size()) {
                rectangles[index].rotate(angle);
            }
            else {
                std::cout << "Недопустимый тип фигуры или индекс!\n";
            }
            break;
        }
        case 7: {
            for (const auto& circle : circles) {
                circle.print();
            }
            for (const auto& square : squares) {
                square.print();
            }
            for (const auto& rectangle : rectangles) {
                rectangle.print();
            }
            break;
        }
        case 8: {
            std::cout << "Выходим...\n";
            break;
        }
        default: {
            std::cout << "Некорректный ввод!\n";
            break;
        }
        }
    } while (choice != 8);

    return 0;
}