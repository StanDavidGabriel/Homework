#include <iostream>
#include "Store.h"
#include "Shoes.h"
#include "Toys.h"

using namespace std;

int main() {
    Store shop;

    shop.shoes.AddProduct(new Shoes("Nike Air Force 1", 450, 43));
    shop.shoes.AddProduct(new Shoes("Jordan 6", 900, 42));
    shop.shoes.AddProduct(new Shoes("Yeezy 500", 1000, 43));
    shop.toys.AddProduct(new Toys("Lego F1 Ferrari", 200, 4));
    shop.toys.AddProduct(new Toys("Kendama", 160, 6));
    shop.toys.AddProduct(new Toys("Masina de politie", 50, 3));
    
    cout << "\n=== ALL SHOES ===\n";
    shop.shoes.PrintAll();

    cout << "\n=== ALL TOYS ===\n";
    shop.toys.PrintAll();

    cout << "\n=== 2. FIND PRODUCT: Lego F1 Ferrari ===\n";
    Product* found = shop.toys.FindProduct("Lego F1 Ferrari");
    if (found) found->Print();

    cout << "\n===3. REMOVE PRODUCT: Jordan 6 ===\n";
    shop.shoes.RemoveProduct("Jordan 6");

    cout << "\n=== 4. SHOES SORTED BY PRICE ===\n";
    auto sorted = shop.shoes.GetProductsSortedByPrice();
    for (auto p : sorted) p->Print();

    Order o1;
    o1.AddProduct(new Shoes("Nike Air Force 1", 450, 43));
    o1.AddProduct(new Toys("Lego F1 Ferrari", 200, 4));

    Order o2;
    o2.AddProduct(new Toys("Kendama", 160, 6));
    o2.AddProduct(new Toys("Masina de politie", 50, 3));
    o2.AddProduct(new Shoes("Yeezy 500", 1000, 43));

    shop.AddOrder(o1);
    shop.AddOrder(o2);


    cout << "\n=== 5. PRODUCTS IN ORDER 1: ===\n";
    o1.Print();

    cout << "\n=== 6. SEARCH \"Kendama\" IN ORDERS ===\n";
    auto results = shop.SearchProductInOrders("Kendama");
    for (auto p : results) p->Print();

    cout << "\n=== 7. TOTAL ORDERS VALUE ===\n";
    cout << shop.ComputeTotalOrdersValue() << endl;

    return 0;
}
