#include "Vehicle.h"

Vehicle::Vehicle() {
    speed = 0;
}

void Vehicle::changeSpeed(int delta) {
    speed += delta;
    if (speed < 0) {
        speed = 0;
    }
}

int Vehicle::getSpeed() {
    return speed;
}

bool Vehicle::isStopped() {
    return speed == 0;
}
