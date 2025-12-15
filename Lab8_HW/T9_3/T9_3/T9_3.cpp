#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

#include "Bike.h"
#include "Car.h"
#include "Plane.h"

using namespace std;

int main() {

    srand(time(NULL));

    vector<Vehicle*> vehicles;

    vehicles.push_back(new Bike("Electric"));
    vehicles.push_back(new Car("BMW"));
    vehicles.push_back(new Plane("Boeing"));
    vehicles.push_back(new Car("Nissan"));

    for (auto v : vehicles) {

        int startV = rand() % 2;

        if (startV == 1) {
            v->start(); 
        }
    }

    for (auto v : vehicles) {
        int delta = rand() % 41 - 20;
        v->changeSpeed(delta);
    }


    cout << "Vehicle status:\n";
    for (auto v : vehicles) {
        cout << v->getName() << " speed=" << v->getSpeed();

        if (v->isStopped()) {
            cout << " (stopped)";
        }

        cout << endl;
    }



    int sum = 0;
    int count = 0;

    for (auto v : vehicles) {
        if (!v->isStopped()) {
            sum += v->getSpeed();
            count++;
        }
    }

    if (count > 0) {
        cout << "\nAverage speed: " << (double)sum / count << endl;
    }
    else {
        cout << "\nNo moving vehicles\n";
    }

}
