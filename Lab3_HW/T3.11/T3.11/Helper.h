#ifndef HELPER_H
#define HELPER_H

#include<iostream>
using namespace std;

class Helper {
private:
	Helper();

public:
	
	static Helper& getInstance();

	int sum(int x, int y);
	int diff(int x, int y);
};

#endif
