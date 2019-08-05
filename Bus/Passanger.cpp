#include<iostream>
#include "Passanger.h"
#include "Bus.h"

int GetLength(const char* _name)
{
	int length = 0;
	while (_name[length] != '\0')
	{
		length++;
	}
	return length;
}

Passanger::Passanger() : size(10)
{
	this->name = new char[size];
	name[0] = '\0';
}

Passanger::Passanger(const char* _name, const int _age, const bool _regular)
	:size(20), age(_age), regular(_regular)
{
	int length = GetLength(_name) + 1;
	this->name = new char[length];
	for (int i = 0; i < length; i++)
	{
		name[i] = _name[i];
	}
	name[length - 1] = '\0';

}

Passanger::~Passanger()
{
	delete[] this->name;
}

Passanger::Passanger(const Passanger& old) :age(old.age),
regular(old.regular)
{
	int nameLength = GetLength(old.name) + 1;
	name = new char[nameLength];
	for (int i = 0; i < nameLength; i++)
	{
		name[i] = old.name[i];
	}
	name[nameLength - 1] = '\0';
}

Passanger& Passanger:: operator=(const Passanger& rhs)
{
	if (this != &rhs)
	{
		delete[] name;
		name = new char[size];
		for (int i = 0; i < size; i++)
		{
			name[i] = rhs.name[i];
		}
		age = rhs.age;
		regular = rhs.regular;
	}
	return *this;
}

const char* Passanger::GetName()const
{
	return name;
}

int Passanger::GetAge()const
{
	return age;
}

bool Passanger::GetRegular()const
{
	return regular;
}

void Passanger:: SetName(const char* _new)
{
	int lengthNew = GetLength(_new);
	if (size < lengthNew)
	{
		delete[] name;
		name = new char[lengthNew + 1];
		size = lengthNew;
	}

	for (int i = 0; i < lengthNew; i++)
	{
		this->name[i] = _new[i];
	}
	name[lengthNew] = '\0';
}

void Passanger::SetAge(const int _new)
{
	this->age = _new;
}

void Passanger::SetRegular(const bool _new)
{
	this->regular = _new;
}

void Passanger::printRegular()const
{
	if (regular == true)
	{
		std::cout << "Regular";
	}
	else
	{
		std::cout << "Not regular";
	}
}