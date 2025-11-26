#pragma once
#include <vector>
#include <string>
#include "Product.h"

class Department {
public:
    virtual ~Department() = default;

    void AddProduct(Product* p);
    void AddProducts(const std::vector<Product*>& list);
    bool RemoveProduct(std::string name);
    Product* FindProduct(std::string name);

    std::vector<Product*> GetProductsSortedByName() const;
    std::vector<Product*> GetProductsSortedByPrice() const;

    void PrintAll() const;

protected:
    std::vector<Product*> products;
};
#pragma once
