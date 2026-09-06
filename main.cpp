#include <iostream>
#include <stdexcept>

class Triangle {
private:
    double side;
    double height;

public:
    //конструкторы
    Triangle(double s, double h) { //инициализации
        setSide(s);
        setHeight(h);
    }

    //сеттеры
    void setSide(double s) {
        if (s <= 0) {
            throw std::invalid_argument("ERROR: Отрезок должен быть больше нуля!");
        }
        side = s;
    }

    void setHeight(double h) {
        if (h <= 0) {
            throw std::invalid_argument("ERROR: Отрезок должен быть больше нуля!");
        }
        height = h;
    }

    //геттеры
    double getSide() const noexcept {
        return side;
    }

    double getHeight() const noexcept {
        return height;
    }

    //методы
    double calculateArea() const { //вычисления площади
        return 0.5 * side * height;
    }
};

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
