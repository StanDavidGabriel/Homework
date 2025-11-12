#include "OnlineShop.h"

Product::Product(string name, double price, bool promo)
{
	this->name = name;
	this->price = price;
	this->onPromo = promo;
}

void Product::setName(string n)
{
	this->name = n;
}

void Product::setPrice(double p)
{
	this->price = p;
}

void Product::setPromo(bool promo)
{
	this->onPromo = promo;
}

string Product::getName()
{
	return name;
}

double Product::getPrice()
{
	return price;
}

bool Product::getPromo()
{
	return onPromo;
}



Category::Category(string name)
{
	this->name = name;
}

void Category::addProduct(Product p)
{
	products.push_back(p);
}

void Category::removeProduct(string prodName)
{
	for (int i = 0; i < products.size(); i++)
	{
		if (products[i].getName() == prodName)
		{
			products.erase(products.begin() + i);
			break;
		}
	}
}

void Category::updateProduct(string prodName, double newPrice)
{
	for (int i = 0; i < products.size(); i++)
	{
		if (products[i].getName() == prodName)
		{
			products[i].setPrice(newPrice);
		}
	}
}

string Category::getName()
{
	return name;
}

void Category::showProd()
{
	cout << endl << "Category: " << name << endl << endl;
	for (int i = 0; i < products.size(); i++)
	{
		cout << "-" << products[i].getName() << " | " << products[i].getPrice();
		if (products[i].getPromo())
		{
			cout << " (promo)";
		}
		cout << endl;
	}
}

vector<Product> Category::getProducts()
{
	return products;
}



OnlineShop::OnlineShop(string name)
{
	this->name = name;
}

void OnlineShop::addCategory(Category c)
{
	categories.push_back(c);
}

void OnlineShop::removeCategory(string catName)
{
	for (int i = 0; i < categories.size(); i++)
	{
		if (categories[i].getName() == catName)
		{
			categories.erase(categories.begin() + i);
			break;
		}
	}
}

void OnlineShop::showAllProd()
{
	cout << "SHOP: " << name << endl;
	for (int i = 0; i < categories.size(); i++)
	{
		categories[i].showProd();
	}
}

void OnlineShop::showPromoProd()
{
	cout << endl << "Promotion products in our shop are: " << endl;
	for (int i = 0; i < categories.size(); i++)
	{
		vector<Product>p = categories[i].getProducts();
		for (int j = 0; j < p.size(); j++)
		{
			if (p[j].getPromo())
			{
				cout << p[j].getName() << " | " << p[j].getPrice() << " | Category: " << categories[i].getName() << endl;
			}
		}
	}
}

void OnlineShop::searchProd(string namePart)
{
	cout << endl << "Search results for: " << namePart << endl;
	for (int i = 0; i < categories.size(); i++)
	{
		vector<Product>p = categories[i].getProducts();
		for (int j = 0; j < p.size(); j++)
		{
			if (p[j].getName().find(namePart) != string::npos)
			{
				cout << p[j].getName() << " | " << p[j].getPrice() << " | Category: " << categories[i].getName() << endl;
			}
		}
	}
}