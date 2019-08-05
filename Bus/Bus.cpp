#include"Bus.h"
#include <iostream>

Bus::Bus() :capacity(40),
count(0), year(2000), line(0)
{
	passangers = new Passanger[capacity];
}

Bus::~Bus()
{
	delete[] this->passangers;
}

Bus::Bus(const Bus& old) : count(old.count),
capacity(old.capacity), year(old.year), line(old.line)
{
	passangers = new Passanger[count];
	for (int i = 0; i < count; i++)
	{
		passangers[i] = old.passangers[i];
	}
}

Bus& Bus:: operator=(const Bus& rhs)
{
	if (this != &rhs)
	{
		delete[] passangers;
		passangers = new Passanger[count];
		for (int i = 0; i < count; i++)
		{
			passangers[i] = rhs.passangers[i];
		}
		year = rhs.year;
		line = rhs.line;
		capacity = rhs.capacity;
		count = rhs.count;
	}
	return *this;
}

void Bus::printAll()const
{
	for (int i = 0; i < count; i++)
	{
		std::cout << passangers[i].GetName() << passangers[i].GetAge()
		<<( passangers[i].GetRegular()?"Regular":"Not regular");
		std::cout << "\n";
	}
}


void Bus::PrintGratis()const
{
	for (int i = 0; i < count; i++)
	{
		if (passangers[i].GetRegular() == 0)
		{
			std::cout << passangers[i].GetName() << "\n";
		}
	}
}

void Bus::TakeDownGratis()
{
	for (int i = 0; i < count; i++)
	{
		if (passangers[i].GetRegular() == false)
		{
			passangers[i--] = passangers[--count];
		}
	}
}

void Bus::AddPassanger(const Passanger& _new)
{
	if (count >= capacity)
	{
		std::cout << "Error!Full bus!" << "\n";
	}
	else
	{
		passangers[count++] = _new;
		//count++;
	}
}
bool compare(const char* lhs, const char* rhs)
{
	int lengthLhs = GetLength(lhs);
	int lengthRhs = GetLength(rhs);
	if (lengthLhs == lengthRhs)
	{
		for (int i = 0; i < lengthLhs; i++)
		{
			if (lhs[i] != rhs[i])
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

void Bus::TakeDownPassanger(const char* _name)
{

	for (int i = 0; i < count; i++)
	{
		if ( compare( passangers[i].GetName(), _name ) )
		{
			passangers[i--] = passangers[--count];
		}
	}
}

void Bus::SetYear(const unsigned _new)
{
	this->year = _new;
}

void Bus::SetLine(const unsigned _new)
{
	this->line = _new;
}

void Bus::SetCapacity(const int _new)
{
	this->capacity = _new;
}

void Bus::SetCount(const int _new)
{
	this->count = _new;
}

unsigned Bus::GetYear()const
{
	return this->year;
}

unsigned Bus::GetLine()const
{
	return this->line;
}

int Bus::GetCapacity()const
{
	return this->capacity;
}

int Bus::GetCount()const
{
	return this->count;
}