#include "Department.h"
#include <algorithm>
#include <iostream>
using namespace std;

void Department::AddProduct(Product* p) {
    products.push_back(p);
}

void Department::AddProducts(const vector<Product*>& list) {
    for (auto p : list) products.push_back(p);
}

bool Department::RemoveProduct(string name) {
    auto it = remove_if(products.begin(), products.end(),
        [&](Product* p) { return p->GetName() == name; });

    if (it != products.end()) {
        products.erase(it, products.end());
        return true;
    }
    return false;
}

Product* Department::FindProduct(string name) {
    for (auto p : products)
        if (p->GetName() == name) return p;
    return nullptr;
}

vector<Product*> Department::GetProductsSortedByName() const {
    vector<Product*> sorted = products;
    sort(sorted.begin(), sorted.end(),
        [](Product* a, Product* b) { return a->GetName() < b->GetName(); });
    return sorted;
}

vector<Product*> Department::GetProductsSortedByPrice() const {
    vector<Product*> sorted = products;
    sort(sorted.begin(), sorted.end(),
        [](Product* a, Product* b) { return a->GetPrice() < b->GetPrice(); });
    return sorted;
}

void Department::PrintAll() const {
    for (auto p : products) p->Print();
}
