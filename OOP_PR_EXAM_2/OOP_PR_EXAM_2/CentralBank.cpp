#include "CentralBank.h"

bool compare(std::string lhs, std::string rhs)
{
	int lSize = lhs.size();
	int rSize = rhs.size();
	if (lSize == rSize)
	{
		for (int i = 0; i < rSize; i++)
		{
			if (lhs[i] != rhs[i])
			{
				return false;
			}
		}
		return true;
	}
	else
		return false;
}

CentralBank::CentralBank(std::string _name):
	name(_name)
{}


CentralBank::~CentralBank()
{}

void CentralBank::addCurrency(std::string _currency)
{
	currencies.push_back(_currency);
	rates.push_back(0);
}

void CentralBank::deleteCurrency(std::string _currency)
{
	int length = currencies.size();
	for (int i = 0; i < length; i++)
	{
		if ((compare(currencies[i],_currency)) == true)
		{
			rates.erase(rates.begin() + i);
			break;
		}
	}
}

void CentralBank::setRate(std::string _currency,double _rate)
{
	int length = currencies.size();
	for (int i = 0; i < length; i++)
	{
		if ((compare(currencies[i], _currency)) == true)
		{
			rates[i] = _rate;
			break;
		}
	}
}

void CentralBank::Register(Observer * _add)
{
	observers.push_back(_add);
}

void CentralBank::unregister(Observer * _delete)
{
	for (unsigned int i = 0; i < observers.size(); i++)
	{
		if ((compare(observers[i]->getName(),_delete->getName())) == true)
		{
			observers.erase(observers.begin() + i);
		}
	}
}

void CentralBank::notify(std::string _currency, double _rate)
{
	for (unsigned int i = 0; i < observers.size(); i++)
	{
		observers[i]->update(_currency,_rate);
	}
}

