#include "Circle.h"
#include <iostream>

using namespace std;

Circle::Circle(double radius) {
    this->radius = radius;
}

void Circle::draw() {
    cout << "circle: " << this->area() << endl;
}

double Circle::area() {
    return 3.14159 * radius * radius;
}
