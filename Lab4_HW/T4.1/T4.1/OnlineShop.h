#ifndef ONLINESHOP_H
#define ONLINESHOP_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Product {
private:
	string name;
	double price;
	bool onPromo;

public:
	Product(string name = "Unknown", double price = 0, bool promo = false);
	void setName(string n);
	void setPrice(double p);
	void setPromo(bool promo);
	string getName();
	double getPrice();
	bool getPromo();
};

class Category {
private:
	string name;
	vector<Product>products;

public:
	Category(string name = "Unnamed");
	void addProduct(Product p);
	void removeProduct(string prodName);
	void updateProduct(string prodName, double newPrice);
	string getName();
	void showProd();
	vector<Product> getProducts();
};

class OnlineShop {
private:
	string name;
	vector<Category>categories;
public:
	OnlineShop(string name = "Shop");
	void addCategory(Category c);
	void removeCategory(string catName);
	void showAllProd();
	void showPromoProd();
	void searchProd(string namePart);
};


#endif
