#ifndef CAR_H
#define CAR_H

#include <string>
#include "Log.h"
using namespace std;

class Car {
public:
    string name;

    Car(const string& n) : name(n) {
        Log::getInstance().Write(*this); 
    }
};

#endif