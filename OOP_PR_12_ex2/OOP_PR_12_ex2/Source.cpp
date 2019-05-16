#include "Forecast.h"
#include<iostream>

int main()
{
	Temperature t;
	Temperature z(-5, 4, 10);
	//std::cout << (t >= z);

	Forecast a;
	Temperature b= a.getTemp();
	//std::cout << b;
	a.setPlace("Sofia");
	std::cout << a;
	Forecast c;
	c = a;
	//std::cout << c.getPlace();
	return 0;
}