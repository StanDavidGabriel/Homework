#include "Toys.h"
#include <iostream>
using namespace std;

Toys::Toys(string name, double price, int minAge)
    : Product(name, price), minAge(minAge) {}

void Toys::Print() const {
    cout << "Toy: " << name << " | price: " << price << " | min age: " << minAge << endl;
}
