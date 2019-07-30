#include "Timestamp.h"


Timestamp::Timestamp() :time(0)
{}

Timestamp::Timestamp(unsigned long int _time) : time(_time)
{}

unsigned long Timestamp::getValue() const
{
	return time;
}

void Timestamp::setValue(unsigned long int _time)
{
	this->time = _time;
}

Timestamp Timestamp::operator+(unsigned int d)
{
	time += d;
	Timestamp funcObject = *this;
	//funcObject.time = this->getValue();
	return funcObject;
}

void Timestamp::operator+=(unsigned int _add)
{
	time = time + _add;
}

std::ostream & operator<<(std::ostream & os, const Timestamp & rhs)
{
	return os << "UNIX time: " << rhs.getValue()<<"\n";
}

std::istream & operator>>(std::istream & is, Timestamp & rhs)
{
	std::cout << "Set time: ";
	unsigned long int _time;
	is >> _time;
	rhs.setValue(_time);
	is.get();
	return is;
}
