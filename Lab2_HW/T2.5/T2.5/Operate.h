#ifndef Operate_H
#define Operate_H

#include <iostream>

using namespace std;

int addInt(int a, int b);
int diffInt(int a, int b);
int divInt(int a, int b);

double addDouble(double a, double b);
double diffDouble(double a, double b);
double divDouble(double a, double b);


int operate(int a, int b, int (*f)(int, int));
double operate(double a, double b, double (*f)(double, double));


#endif