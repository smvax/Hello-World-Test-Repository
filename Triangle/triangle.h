#pragma once
#include "pch.h"
#include "framework.h"
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
