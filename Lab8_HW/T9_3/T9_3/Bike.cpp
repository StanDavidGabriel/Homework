#include "Bike.h"
#include <iostream>

using namespace std;

Bike::Bike(string name) {
    this->name = name;
}

void Bike::start() {
    speed = rand() % 20 + 5; 
}

string Bike::getName() {
    return name + " bike";
}
