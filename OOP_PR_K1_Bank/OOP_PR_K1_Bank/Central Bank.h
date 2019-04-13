#pragma once
#include "Currency.h"

class CentralBank
{
public:
	CentralBank();
	~CentralBank();
	CentralBank(const CentralBank& old);
	CentralBank& operator =(const CentralBank& rhs);
	
	void resize();
	
	void addCurrency(const Currency& _currency);
	void deleteCurrency(Currency& _currency);
	void setRate(Currency& _current, float _rate);

private:
	Currency* currencies;
	int capacity;
	int size;
};

