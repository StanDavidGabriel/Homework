#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
    virtual void draw() = 0;  
    virtual double area() = 0;
};

#endif
