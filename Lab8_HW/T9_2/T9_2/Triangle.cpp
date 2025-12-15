#include "Triangle.h"
#include <iostream>

using namespace std;

Triangle::Triangle(double base, double height) {
    this->base = base;
    this->height = height;
}

void Triangle::draw() {
    cout << "triangle: " << this->area() << endl;
}

double Triangle::area() {
    return (base * height) / 2;
}
