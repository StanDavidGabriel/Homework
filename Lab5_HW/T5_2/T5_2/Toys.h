#pragma once
#include "Product.h"

class Toys : public Product {
public:
    Toys(std::string name = "unknown", double price = 0.0, int minAge = 0);
    void Print() const override;

private:
    int minAge;
};
