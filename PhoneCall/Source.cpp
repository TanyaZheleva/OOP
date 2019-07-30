#include <iostream>
#include "PhoneCall.h"

int main()
{
	PhoneCall p;
	p.setLength(50);
	p.getPrice();
	p.setNumber(9002121004);
	std::cout << p.getPrice() << "\n";
	std::cout << p.getNumber() << "\n";

	return 0;
}