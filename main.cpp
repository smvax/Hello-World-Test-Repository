#include <iostream>
#include "triangle.h"

int main() {
    setlocale(LC_ALL, "rus");

    double side = 0.0;
    double height = 0.0;
    std::cout << "Program for calculating area of your triangle." << std::endl;
    std::cout << "Input side length: ";
    std::cin >> side;
    std::cout << "Input adjoined height: ";
    std::cin >> height;

    try {
        Triangle inputTriangle(side, height);
        std::cout << std::endl << "Area of this triangle: "
            << inputTriangle.calculateArea() << std::endl;

    }
    catch (std::invalid_argument& e) {
        std::cout << std::endl << e.what() << std::endl;
    }

    return 0;
}
