#include "Currency.h"
#include <iostream>

Currency::Currency(): length(10),rate(0)
{
	currency = new char[length];
	currency[0] = '\0';
}

Currency::Currency(const char* _currency, float _rate):
	rate(_rate),length(strlen(_currency))
{
	currency = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		currency[i] = _currency[i];
	}
	currency[length] = '\0';
}

Currency::~Currency()
{
	delete[] currency;
}

Currency::Currency(const Currency& old) : rate(old.rate),
length(strlen(old.currency))
{
	currency = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		currency[i] = old.currency[i];
	}
	currency[length] = '\0';
}
std::ostream& operator<<(std::ostream& os, Currency& _currency)
{
	return os << _currency.getCurrency() << "  " << _currency.getRate() << "\n";
}


Currency& Currency:: operator= (const Currency& rhs)
{
	if (this != &rhs)
	{
		length = strlen(rhs.currency);
		rate = rhs.rate;
		currency = new char[length + 1];
		for (int i = 0; i < length; i++)
		{
			currency[i] = rhs.currency[i];
		}
		currency[length] = '\0';
	}
	return *this;
}

const char* Currency::getCurrency()const
{
	return this->currency;
}

const float Currency::getRate()const
{
	return this->rate;
}

void Currency::setCurrency(const char* _currency)
{
	int newLength = strlen(_currency);
	if (length < newLength)
	{
		delete[] currency;
		currency = new char[newLength + 1];
		length = newLength;
	}
	for (int i = 0; i < newLength; i++)
	{
		currency[i] = _currency[i];
	}
	currency[newLength] = '\0';
}

void Currency::setRate(const float _rate)
{
	this->rate = _rate;
}