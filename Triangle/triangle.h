#pragma once
#include "pch.h"
#include <stdexcept>

class Triangle {
private:
    double _side;
    double _height;

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
        _side = s;
    }

    void setHeight(double h) {
        if (h <= 0) {
            throw std::invalid_argument("ERROR: Length must be positive!");
        }
        _height = h;
    }

    //getters
    double getSide() const noexcept {
        return _side;
    }

    double getHeight() const noexcept {
        return _height;
    }

    //methods
    double calculateArea() const {
        return 0.5 * _side * _height;
    }
};
