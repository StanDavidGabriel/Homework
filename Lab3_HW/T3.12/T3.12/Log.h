#ifndef LOG_H
#define LOG_H

#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
using namespace std;

class Car;    
class Student;

class Log {
private:
    Log() {} 
    Log(const Log&) = delete;
    Log& operator=(const Log&) = delete;

    
    string getCurrentDateTime() const {
        time_t now = time(0);
        tm ltm_struct;
        localtime_s(&ltm_struct, &now);

        char buf[20];
        strftime(buf, sizeof(buf), "%Y-%m-%d %H:%M:%S", &ltm_struct);
        return string(buf);
    }

public:
    static Log& getInstance() {
        static Log instance; 
        return instance;
    }

    void Write(const Car& car);
    void Write(const Student& student);
};

#endif
