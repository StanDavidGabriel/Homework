#include "Product.h"
using namespace std;

Product::Product(string name, double price) : name(name), price(price) {}

string Product::GetName() const { return name; }
double Product::GetPrice() const { return price; }

void Product::Print() const {
    cout << "Product: " << name << " | price: " << price << endl;
}
