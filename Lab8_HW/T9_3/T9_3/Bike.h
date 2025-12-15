#ifndef BIKE_H
#define BIKE_H

#include "Vehicle.h"

class Bike : public Vehicle {
private:
    string name;

public:
    Bike(string name);
    void start();
    string getName();
};

#endif
