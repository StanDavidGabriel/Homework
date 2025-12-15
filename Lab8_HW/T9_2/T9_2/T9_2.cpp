#include <iostream>
#include <vector>
#include "Circle.h"
#include "Triangle.h"
#include "Square.h"

using namespace std;

int main() {

    vector<Shape*> shapes;

    shapes.push_back(new Circle(3));
    shapes.push_back(new Triangle(4, 5));
    shapes.push_back(new Square(6));
    shapes.push_back(new Circle(2));

    double sumArea = 0;

    for (auto s : shapes) {
        s->draw(); 
        sumArea += s->area();     
    }

    cout << "Sum of areas = " << sumArea << endl;

}
