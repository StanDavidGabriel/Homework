#include "OnlineShop.h"

int main()
{
	OnlineShop shop("MyShop");

	Category electronics("Electronics");
	electronics.addProduct(Product("Phone", 999, false));
	electronics.addProduct(Product("TV", 400, true));
	electronics.addProduct(Product("Laptop", 3000, false));

	Category clothes("Clothes");
	clothes.addProduct(Product("T-Shirt", 90, true));
	clothes.addProduct(Product("Jeans", 240, false));


	shop.addCategory(electronics);
	shop.addCategory(clothes);

	shop.showAllProd();

	cout << endl;

	shop.showPromoProd();
	
	cout << endl;

	shop.searchProd("Jean");

	return 0;
}