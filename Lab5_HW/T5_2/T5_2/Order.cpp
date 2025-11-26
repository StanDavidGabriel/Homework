#include "Order.h"
#include <algorithm>
#include <iostream>
using namespace std;

void Order::AddProduct(Product* p) {
    items.push_back(p);
}

void Order::RemoveProduct(string name) {
    items.erase(remove_if(items.begin(), items.end(),
        [&](Product* p) { return p->GetName() == name; }),
        items.end());
}

double Order::ComputeTotal() const {
    double sum = 0;
    for (auto p : items) sum += p->GetPrice();
    return sum;
}

void Order::Print() const {
    cout << "Order items:" << endl;
    for (auto p : items) p->Print();
    cout << "Total: " << ComputeTotal() << endl;
}

vector<Product*> Order::GetProducts() const {
    return items;
}
