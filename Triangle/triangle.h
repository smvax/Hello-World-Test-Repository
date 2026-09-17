#pragma once
#include <stdexcept>

class Triangle {
private:
    double _side;
    double _height;

public:
    //constructors
    Triangle(double s, double h);

    //setters
    void setSide(double s);
    void setHeight(double h);

    //getters
    inline double getSide() const noexcept {
        return _side;
    }

    inline double getHeight() const noexcept {
        return _height;
    }

    //methods
    inline double calculateArea() const {
        return 0.5 * _side * _height;
    }
};
