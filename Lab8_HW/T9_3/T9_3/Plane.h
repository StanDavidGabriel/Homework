#ifndef PLANE_H
#define PLANE_H

#include "Vehicle.h"

class Plane : public Vehicle {
private:
    string name;

public:
    Plane(string name);
    void start();
    string getName();
};

#endif
