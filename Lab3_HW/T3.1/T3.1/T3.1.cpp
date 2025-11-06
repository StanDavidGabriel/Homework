#include "Rectangle.h"

int main()
{
	Rectangle R1;
	cout << "Rectangle 1: " << endl;
	R1.display();
	cout << endl;


	Rectangle R2(5, 3);
	cout << "Rectangle 2: " << endl;
	R2.display();
	cout << endl;	

	R2.setHeight(4);
	R2.setWidth(5);
	R2.display();
	cout << endl;

	if (R1.getPerimeter() > R2.getPerimeter())
	{
		cout << "Rectangle 1 has bigger perimeter.\n";
	}
	else
		if (R1.getPerimeter() < R2.getPerimeter())
		{
			cout << "Rectangle 2 has bigger perimeter.\n";

		}
		else
		{
			cout << "Equal perimeter.\n";
		}


	if (R1.getArea() > R2.getArea())
	{
		cout << "Rectangle 1 has bigger area.\n";
	}
	else
		if (R1.getArea() < R2.getArea())
		{
			cout << "Rectangle 2 has bigger area.\n";

		}
		else
		{
			cout << "Equal areas.\n";
		}
	
}