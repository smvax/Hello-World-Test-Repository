#include "triangle.h"

//constructors
Triangle::Triangle(double s, double h) { //initialisation constructor
    setSide(s);
    setHeight(h);
}

//setters
void Triangle::setSide(double s) {
    if (s <= 0) {
        throw std::invalid_argument("ERROR: Length must be positive!");
    }
    _side = s;
}

void Triangle::setHeight(double h) {
    if (h <= 0) {
        throw std::invalid_argument("ERROR: Length must be positive!");
    }
    _height = h;
}
