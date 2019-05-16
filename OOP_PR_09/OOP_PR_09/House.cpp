#include "House.h"


House::House() :Building(), owner(nullptr), levels(1)
{
}

House::~House()
{
	delete owner;
}

House::House(const char * _address, const char*_owner, int _levels, int _height, float _area) :Building(_address, _height, _area)
{
	this->setOwner(_owner);
	this->setLevels(_levels);
}

House::House(const House & old) :Building(old)
{
	this->setOwner(old.getOwner());
	this->setLevels(old.getLevels());
}

House & House::operator=(const House & rhs)
{
	if (this != &rhs)
	{
		Building::operator=(rhs);
		this->setOwner(rhs.getOwner());
		this->setLevels(rhs.getLevels());
	}
	return *this;
}

void House::setOwner(const char * _owner)
{
	int length = strlen(_owner);
	owner = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		owner[i] = _owner[i];
	}
	owner[length] = '\0';
}

const char * House::getOwner() const
{
	return owner;
}

void House::setLevels(int _levels)
{
	levels = _levels;
}

int House::getLevels() const
{
	return levels;
}

std::istream & operator>>(std::istream & is, House & rhs)
{
	rhs.Building::read(rhs);
	std::cout << "Enter owner: ";
	is >> rhs.owner;
	std::cout << "Enter levels: ";
	is >> rhs.levels;
	return is;
}

std::ostream & operator<<(std::ostream & os, House & rhs)
{
	rhs.Building::print(rhs);
	std::cout << "Owner: " << rhs.owner << "\n Levels: " << rhs.levels;
}

House& Max(const House* arr,int size)
{
	House max = arr[0];
	int length = arr[0].getHeight / arr[0].getLevels;
	for (int i = 0; i < size; i++)
	{
		int newLength= arr[i].getHeight / arr[i].getLevels;
		if (length < newLength)
		{
			length = newLength;
			max = arr[i];
		}
	}
	return max;
}
