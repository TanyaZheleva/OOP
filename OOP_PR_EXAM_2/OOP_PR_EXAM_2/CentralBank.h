#pragma once
#include <string>
#include <vector>
#include "Observer.h"

class CentralBank
{
public:
	CentralBank(std::string _name);
	~CentralBank();
	void addCurrency(std::string _currency);
	void deleteCurrency(std::string _currency);
	void setRate(std::string _currency,double _rate);
	void Register (Observer* _add);
	void unregister(Observer* _delete);
	void notify(std::string _currency, double _rate);
	
private:
	std::string name;
	std::vector<std::string>currencies;
	std::vector<double>rates;
	std::vector<Observer*> observers;
};

