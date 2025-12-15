#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

class Car : public Vehicle {
private:
    string name;

public:
    Car(string name);
    void start();
};

#endif
