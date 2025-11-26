#pragma once
#include <vector>
#include "Product.h"

class Order {
public:
    void AddProduct(Product* p);
    void RemoveProduct(std::string name);
    double ComputeTotal() const;
    void Print() const;

    std::vector<Product*> GetProducts() const;

private:
    std::vector<Product*> items;
};
#pragma once
