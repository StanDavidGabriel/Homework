#include "Store.h"

void Store::AddOrder(const Order& o) {
    orders.push_back(o);
}

std::vector<Product*> Store::SearchProductInOrders(std::string name) {
    std::vector<Product*> result;
    for (auto& order : orders) {
        for (auto p : order.GetProducts()) {
            if (p->GetName() == name) result.push_back(p);
        }
    }
    return result;
}

double Store::ComputeTotalOrdersValue() const {
    double total = 0;
    for (auto& order : orders) total += order.ComputeTotal();
    return total;
}
