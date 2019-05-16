#include "Temperature.h"
#include<iostream>

int main()
{
	Temperature t;
	Temperature z(-5, 4, 10);
	std::cout << (t >= z);

	return 0;
}