#include "Shoes.h"
#include <iostream>
using namespace std;

Shoes::Shoes(string name, double price, int size)
    : Product(name, price), size(size) {}

void Shoes::Print() const {
    cout << "Shoes: " << name << " | price: " << price << " | size: " << size << endl;
}
