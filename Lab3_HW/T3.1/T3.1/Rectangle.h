#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
using namespace std;


class Rectangle {
private:
	double width;
	double height;


public:
	Rectangle();						// default
	Rectangle(double w, double h);		// parameterized

	void setWidth(double w);
	void setHeight(double h);

	double getWidth() const;
	double getHeight() const;

	double getArea() const;
	double getPerimeter() const;

	void display() const;
};


#endif