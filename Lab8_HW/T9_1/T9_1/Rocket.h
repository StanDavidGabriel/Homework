#ifndef ROCKET_H
#define ROCKET_H

#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

class Rocket : public Vehicle {
private:
    string name;

public:
    Rocket(string name);
    void start();
};

#endif
