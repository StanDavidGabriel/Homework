#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Polynomial {
public:
	Polynomial(vector<int> coef);

	Polynomial operator+(const Polynomial&p);

	void Print();

private:
	vector<int>coef;
};