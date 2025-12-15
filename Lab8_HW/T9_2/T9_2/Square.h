#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

class Square : public Shape {
private:
    double side;

public:
    Square(double side);
    void draw();
    double area();
};

#endif
