#include <iostream>
#include "Model.h"
#include "Manufacturer.h"
#include "Price.h"
#include "Battery.h"
#include "Display.h"

int main()
{
	Model a;
	a.setModel("Nokia");

	std::cout << a.getModel();

	Manufacturer b;
	b.setManufacturer("Samsung");
	std::cout << b.getManufacturer() << "\n";

	Price c;
	c.setPrice(200);
	std::cout << c.getPrice() << "\n";

	Battery p;
	p.setTalktime(200);
	p.setBatteryModel("xxxxx");
	std::cout << p.getTalktime() << "\n";
	std::cout << p.getBatteryModel() << "\n";

	Display q;
	q.setColourCount(2345);
	q.setSize(13);
	std::cout << q.getColoutcount() << "\n";
	std::cout << q.getSize() << "\n";
	return 0;
}