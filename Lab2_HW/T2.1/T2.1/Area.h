#ifndef Area_H
#define Area_H

#include <iostream>
#include <string>
using namespace std;

double convertToDouble(string s);

double AreaGeneral(double a, double b);

double computeArea(double (*f)(double, double), string s1, string s2 = "0");


#endif