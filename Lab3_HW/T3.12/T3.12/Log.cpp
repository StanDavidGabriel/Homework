#include "Log.h"
#include "Car.h"
#include "Student.h"
#include <fstream>

void Log::Write(const Car& car) {
    ofstream file("log.txt", ios::app);
    if (file.is_open()) {
        file << getCurrentDateTime() << " Car " << car.name << endl;
    }
    file.close();
}

void Log::Write(const Student& student) {
    ofstream file("log.txt", ios::app);
    if (file.is_open()) {
        file << getCurrentDateTime() << " Student " << student.name << endl;
    }
    file.close();
}