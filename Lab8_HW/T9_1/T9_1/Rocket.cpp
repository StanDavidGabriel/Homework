#include "Rocket.h"

Rocket::Rocket(string name) {
    this->name = name;
}

void Rocket::start() {
    cout << "start " << name << " rocket" << endl;
}
