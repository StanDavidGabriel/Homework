#ifndef INFRASTRUCTURE_H
#define INFRASTRUCTURE_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Address {
private:
    string street;
    string city;
public:
    Address(string street = "Unknown", string city = "Unknown");
    string getStreet();
    string getCity();
    void showAddress();
};



class Driver {
private:
    string name;
    Address address;
public:
    Driver(string name = "NoName", Address addr = Address());
    string getName();
    void showDriver();
};



class Engine {
private:
    int power;
public:
    Engine(int power = 100);
    void start();
    void stop();
    int getPower();
};



class Car {
private:
    string brand;
    Engine engine;
    Driver driver;
public:
    Car(string brand = "NoBrand", Engine engine = Engine(), Driver driver = Driver());
    void startCar();
    void stopCar();
    void showCar();
};



class Commuter {
private:
    string name;
public:
    Commuter(string name = "Anon");
    string getName();
};



class Bus {
private:
    string carplate;
    Driver driver;
    vector<Commuter> commuters;
public:
    Bus(string carplate = "Unknown", Driver driver = Driver());
    void addCommuter(Commuter c);
    void removeCommuter(string name);
    void showBus();
};



class BusStation {
private:
    string name;
    vector<Bus> buses;
public:
    BusStation(string name = "Station");
    void addBus(Bus b);
    void showStation();
};

#endif