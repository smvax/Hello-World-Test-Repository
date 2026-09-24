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
    inline double getSide() const noexcept;
    inline double getHeight() const noexcept;

    //methods
    inline double calculateArea() const noexcept;
};

inline double Triangle::getSide() const noexcept {
    return _side;
}

inline double Triangle::getHeight() const noexcept {
    return _height;
}

inline double Triangle::calculateArea() const noexcept {
    return 0.5 * _side * _height;
}