#include "Car.h"
#include <iostream>

using namespace std;

Car::Car(string name) {
    this->name = name;
}

void Car::start() {
    speed = rand() % 60 + 20; 
}

string Car::getName() {
    return name + " car";
}
