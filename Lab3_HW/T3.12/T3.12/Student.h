#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "Log.h"
using namespace std;

class Student {
public:
    string name;

    Student(const string& n) : name(n) {
        Log::getInstance().Write(*this);
    }
};

#endif