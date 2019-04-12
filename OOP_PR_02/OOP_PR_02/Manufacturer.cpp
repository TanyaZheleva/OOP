#include "Manufacturer.h"

Manufacturer::Manufacturer()
{

}

Manufacturer::~Manufacturer()
{

}

int strLen(const char* _x)
{
	int size = 0;
	while (_x[size] != 0)
	{
		size++;
	}
	return size;
}

int min(int a, int b)
{
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

const char* Manufacturer::getManufacturer()
{
	return this->manufacturer;
}

void Manufacturer::setManufacturer(const char* _manufacturer)
{
	int size = strLen(_manufacturer);
	int capacity = ManufacturerCapacity - 1;
	int length = min(size,capacity)-1;

	for (size_t i = 0; i <= length; i++)
	{
		this->manufacturer[i] = _manufacturer[i];
	}
	this->manufacturer[length] = 0;
}