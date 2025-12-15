#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

using namespace std;

class Vehicle {
protected:
    int speed;

public:
    Vehicle();
    virtual void start() = 0;
    virtual void changeSpeed(int delta);
    int getSpeed();
    bool isStopped();
    virtual string getName() = 0;
};

#endif
