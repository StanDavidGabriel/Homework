#include <iostream>
#include <vector>

#include "Car.h"
#include "Rocket.h"

using namespace std;

int main() {

    vector<Vehicle*> vehicles;

    vehicles.push_back(new Car("red"));
    vehicles.push_back(new Car("awesome"));
    vehicles.push_back(new Rocket("NASA"));

    for (auto v : vehicles) {
        v->start();  
    }

    return 0;
}
