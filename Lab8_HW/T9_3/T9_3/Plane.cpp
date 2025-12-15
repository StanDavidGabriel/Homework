#include "Plane.h"
#include <iostream>

using namespace std;

Plane::Plane(string name) {
    this->name = name;
}

void Plane::start() {
    speed = rand() % 300 + 200; 
}

string Plane::getName() {
    return name + " plane";
}
