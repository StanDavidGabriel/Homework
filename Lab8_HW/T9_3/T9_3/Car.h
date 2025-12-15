#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
    string name;

public:
    Car(string name);
    void start();
    string getName();
};

#endif
