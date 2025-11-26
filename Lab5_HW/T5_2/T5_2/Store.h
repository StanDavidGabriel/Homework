#pragma once
#include "ShoesDepartment.h"
#include "ToysDepartment.h"
#include "Order.h"
#include <vector>

class Store {
public:
    ShoesDepartment shoes;
    ToysDepartment toys;

    void AddOrder(const Order& o);
    std::vector<Product*> SearchProductInOrders(std::string name);
    double ComputeTotalOrdersValue() const;

private:
    std::vector<Order> orders;
};
#pragma once
