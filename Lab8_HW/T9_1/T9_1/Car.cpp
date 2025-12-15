#include "Car.h"

Car::Car(string name) {
    this->name = name;
}

void Car::start() {
    cout << "start " << name << " car" << endl;
}
