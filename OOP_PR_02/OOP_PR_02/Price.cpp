#include "Price.h"

Price::Price()
{
}

Price::~Price()
{
}

int Price::getPrice()
{
	return this->price;	
}

void Price::setPrice(int _price)
{
	this->price = _price;
}