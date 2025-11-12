#include "Infrastructure.h"

Address::Address(string street, string city) 
{
    this->street = street;
    this->city = city;
}

string Address::getStreet()
{ 
    return street; 
}

string Address::getCity() 
{ 
    return city; 
}

void Address::showAddress() 
{
    cout << street << ", " << city;
}



Driver::Driver(string name, Address addr) 
{
    this->name = name;
    this->address = addr;
}

string Driver::getName() 
{ 
    return name; 
}

void Driver::showDriver() 
{
    cout << "Driver: " << name << " | Address: ";
    address.showAddress();
    cout << endl;
}


Engine::Engine(int power) 
{ 
    this->power = power;
}

void Engine::start() 
{ 
    cout << "Engine started (" << power << " HP)" << endl; 
}

void Engine::stop() 
{ 
    cout << "Engine stopped." << endl; 
}

int Engine::getPower() 
{ 
    return power; 
}



Car::Car(string brand, Engine engine, Driver driver)
{
    this->brand = brand;
    this->engine = engine;
    this->driver = driver;
}

void Car::startCar() {
    cout << brand << " starting..." << endl;
    engine.start();
}

void Car::stopCar() 
{
    engine.stop();
    cout << brand << " stopped." << endl;
}

void Car::showCar() 
{
    cout << "Car brand: " << brand << endl;
    driver.showDriver();
    cout << "Engine power: " << engine.getPower() << " HP" << endl;
}



Commuter::Commuter(string name)
{
    this->name = name;
}
string Commuter::getName() 
{ 
    return name; 
}



Bus::Bus(string carplate, Driver driver) 
{
    this->carplate = carplate;
    this->driver = driver;
}

void Bus::addCommuter(Commuter c) 
{
    commuters.push_back(c);
}

void Bus::removeCommuter(string name) 
{
    for (int i = 0; i < commuters.size(); i++) 
    {
        if (commuters[i].getName() == name) 
        {
            commuters.erase(commuters.begin() + i);
            break;
        }
    }
}

void Bus::showBus() 
{
    cout << "Bus carplate: " << carplate << endl;
    driver.showDriver();
    cout << "Passengers: ";
    for (int i = 0; i < commuters.size(); i++) 
    {
        cout << commuters[i].getName();
        if (i != commuters.size() - 1) 
        {
            cout << ", ";
        }
    }
    cout << endl;
}



BusStation::BusStation(string name)
{
    this->name = name;
}

void BusStation::addBus(Bus b) 
{
    buses.push_back(b);
}

void BusStation::showStation() 
{
    cout << "Bus station: " << name << endl;
    for (int i = 0; i < buses.size(); i++)
    {
        buses[i].showBus();
        cout << endl;
    }
}