#include <iostream>

int main() {
    setlocale(LC_ALL, "rus");

    double side = 0.0;
    double height = 0.0;

    std::cout << "Программа для вычисления площади треугольника." << std::endl;
    std::cout << "Введите длину стороны треугольника: ";
    std::cin >> side;
    std::cout << "Введите высоту, прилегающую к этой стороне: ";
    std::cin >> height;
    std::cout << std::endl << "Площадь введенного треугольника равна: " << 0.5 * side * height << std::endl;

    return 0;
}