#include <iostream>
#include "triangle.h"

int main() {
    setlocale(LC_ALL, "rus");

    double side = 0.0;
    double height = 0.0;
    std::cout << "Программа для вычисления площади треугольника." << std::endl;
    std::cout << "Введите длину стороны треугольника: ";
    std::cin >> side;
    std::cout << "Введите высоту, прилегающую к этой стороне: ";
    std::cin >> height;

    try {
        Triangle inputTriangle(side, height);
        std::cout << std::endl << "Площадь введенного треугольника равна: "
            << inputTriangle.calculateArea() << std::endl;

    }
    catch (std::invalid_argument& e) {
        std::cout << std::endl << e.what() << std::endl;
    }

    return 0;
}
