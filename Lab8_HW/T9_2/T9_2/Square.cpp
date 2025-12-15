#include "Square.h"
#include <iostream>

using namespace std;

Square::Square(double side) {
    this->side = side;
}

void Square::draw() {
    cout << "square: " << this->area() << endl;
}

double Square::area() {
    return side * side;
}
