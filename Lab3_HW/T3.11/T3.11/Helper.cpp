#include "Helper.h"

Helper::Helper() {}

Helper& Helper::getInstance()
{
	static Helper instance;
	return instance;
}

int Helper::sum(int x, int y)
{
	return x + y;
}

int Helper::diff(int x, int y)
{
	return x - y;
}