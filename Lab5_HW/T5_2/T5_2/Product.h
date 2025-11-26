#pragma once
#include <string>
#include <iostream>

class Product {
public:
    Product(std::string name = "unknown", double price = 0.0);
    virtual ~Product() = default;

    std::string GetName() const;
    double GetPrice() const;

    virtual void Print() const;

protected:
    std::string name;
    double price;
};
