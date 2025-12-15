#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"

class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(double base, double height);
    void draw();
    double area();
};

#endif
