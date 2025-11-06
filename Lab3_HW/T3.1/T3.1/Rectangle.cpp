#include "Rectangle.h"

Rectangle::Rectangle()
{
	height = 4;
	width = 4;
}

Rectangle::Rectangle(double height, double width)
{
	this->height = height;
	this->width = width;
}

double Rectangle::getPerimeter()  const
{
	return 2 * (height + width);
}

double Rectangle::getArea() const
{
	return height * width;
}


void Rectangle::setHeight(double height)
{
	this->height = height;
}

void Rectangle::setWidth(double width)
{
	this->width = width;
}

double Rectangle::getHeight()const
{
	return height;
}
double Rectangle::getWidth()const
{
	return width;
}


void Rectangle::display()const
{
	cout << "Rectangle [" << height << " x " << width << "]" << endl;
	cout << "Perimeter = " << getPerimeter() << endl;
	cout << "area = " << getArea() << endl;
}