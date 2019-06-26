#include "CentralBank.h"

CentralBank::CentralBank(std::string _name/*, std::vector<std::string>_currencies, std::vector<double>_rates*/):
	name(_name)/*,currencies(_currencies),rates(_rates)*/
{}


CentralBank::~CentralBank()
{}

void CentralBank::addCurrency(std::string _currency)
{
	currencies.push_back(_currency);
}

void CentralBank::deleteCurrency(std::string _currency)
{
	int length = currencies.size();
	for (int i = 0; i < length; i++)
	{
		if ((currencies[i].compare(_currency)) == 0)
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
		if ((currencies[i].compare(_currency)) == 0)
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
	for (int i = 0; i < observers.size(); i++)
	{
		if ((observers[i]->getName().compare(_delete->getName())) == 0)
		{
			observers.erase(observers.begin() + i);
		}
	}
}

void CentralBank::notify(std::string _currency, double _rate)
{
	for (int i = 0; i < observers.size(); i++)
	{
		observers[i]->update(_currency,_rate);
	}
}

