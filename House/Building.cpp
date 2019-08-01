#include "Building.h"

Building::Building():address(nullptr),height(0),area(0.0f)
{
}

Building::Building(const char * _address, int _height, float _area)
{
	this->setAddress(_address);
	this->setArea(_area);
	this->setHeight(_height);
}

Building::~Building()
{
	delete[] address;
}

Building::Building(const Building & old):height(old.height),area(old.area)
{
	this->setAddress(old.getAddress());
}

Building & Building::operator=(const Building & rhs)
{
	if (this != &rhs)
	{
		this->setAddress(rhs.getAddress());
		this->setArea(rhs.getArea());
		this->setHeight(rhs.getHeight());
	}
	return *this;
}

void Building::setAddress(const char * _address)
{
	int length = strlen(_address);
	address = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		address[i] = _address[i];
	}
	address[length] = '\0';
}

const char * Building::getAddress() const
{
	return address;
}

void Building::setHeight(int _height)
{
	height = _height;
}

int Building::getHeight() const
{
	return height;
}

void Building::setArea(float _area)
{
	area = _area;
}

float Building::getArea() const
{
	return area;
}

void Building::read(Building& rhs)
{
	std::cin >> rhs;
}

void Building::print(const Building & rhs)
{
	std::cout << rhs<<'\n';
}

std::ostream& operator<<(std::ostream& os, const Building & rhs)
{
	os << "Address: " << rhs.getAddress() << "\n Height" << rhs.getHeight() << "\n Area: " << rhs.getArea();
}

std::istream& operator>>(std::istream& is, Building & rhs)
{
	std::cout << "Enter address: ";
	is >> rhs.address;
	std::cout << "Enter height: ";
	is >> rhs.height;
	std::cout << "Enter area: ";
	is >> rhs.area;
	return is;
}



