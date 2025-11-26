#pragma once
#include "Product.h"

class Shoes : public Product {
public:
    Shoes(std::string name = "unknown", double price = 0.0, int size = 0);
    void Print() const override;

private:
    int size;
};
#pragma once
