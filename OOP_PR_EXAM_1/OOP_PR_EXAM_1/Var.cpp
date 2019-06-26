#include "Var.h"

Var::Var(const char * _name, double _value)
{
	setName(_name);
	setValue(_value);
}

Var::~Var()
{
	delete[]name;
}

Var::Var(const Var& old)
{
	setName(old.name);
	setValue(old.Value);
}

Var & Var::operator=(const Var & rhs)
{
	if (this != &rhs)
	{
		setName(rhs.name);
		setValue(rhs.Value);
	}
	return *this;
}

void Var::setName(const char * _name)
{
	delete[] name;
	int length = strlen(_name);
	name = new char[length + 1];
	for (int i = 0; i <= length; i++)
	{
		name[i] = _name[i];
	}
}

void Var::setValue(double _Value)
{
	Value = _Value;
}

double Var::value()
{
	return this->Value;
}

void Var::print()
{
	int length = strlen(name);
	for (size_t i = 0; i < length; i++)
	{
		std::cout << name[i];
	}
}

Expression * Var::clone() const
{
	return new Var(*this);
}
