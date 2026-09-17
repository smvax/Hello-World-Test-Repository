#pragma once
#include "pch.h"
#include <stdexcept>

class Triangle {
private:
    double side;
    double height;

public:
    //constructors
    Triangle(double s, double h) { //initialisation constructor
        setSide(s);
        setHeight(h);
    }

    //setters
    void setSide(double s) {
        if (s <= 0) {
            throw std::invalid_argument("ERROR: Length must be positive!");
        }
        side = s;
    }

    void setHeight(double h) {
        if (h <= 0) {
            throw std::invalid_argument("ERROR: Length must be positive!");
        }
        height = h;
    }

    //getters
    double getSide() const noexcept {
        return side;
    }

    double getHeight() const noexcept {
        return height;
    }

    //methods
    double calculateArea() const {
        return 0.5 * side * height;
    }
};
