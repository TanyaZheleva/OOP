#include "Central Bank.h"
#include<iostream>

CentralBank::CentralBank() :size(0), capacity(5)
{
	currencies = new Currency[capacity];
}


CentralBank::~CentralBank()
{
	delete[] currencies;
}

CentralBank::CentralBank(const CentralBank& old) : size(old.size),
capacity(old.capacity)
{
	delete[] currencies;
	currencies = new Currency[size];
	for (int i = 0; i < size; i++)
	{
		currencies[i] = old.currencies[i];
	}
}

CentralBank& CentralBank::operator=(const CentralBank& rhs)
{
	if (this != &rhs)
	{
		delete[] currencies;
		currencies = new Currency[size];
		for (int i = 0; i < size; i++)
		{
			currencies[i] = rhs.currencies[i];
		}
		capacity = rhs.capacity;
		size = rhs.size;

	}
	return *this;
}

void CentralBank::resize()
{
	Currency*tmp = new Currency[capacity * 2];
	for (int i = 0; i < capacity; i++)
	{
		tmp[i] = currencies[i];
	}
	delete[]currencies;
	currencies = tmp;
	capacity *= 2;
}

bool compare(const char* lhs, const char* rhs)
{
	int sizeLhs = strlen(lhs);
	int sizeRhs = strlen(rhs);
	if (sizeLhs != sizeRhs)
	{
		return false;
	}
	for (int i = 0; i < sizeLhs; i++)
	{
		if (lhs[i] != rhs[i])
		{
			return false;
		}
	}
	return true;
}

void CentralBank::addCurrency(const Currency& _currency)
{
	if (capacity == size)
	{
		resize();
	}

	currencies[size] = _currency;
	size++;
}

void CentralBank::deleteCurrency(Currency& _currency)
{
	Currency* temp = new Currency[size - 1];
	int j = 0;
	for (int i = 0; i < size; i++)
	{
		if (compare((currencies[i].getCurrency()), _currency.getCurrency()))
		{
			temp[j] = currencies[i];
			j++;
		}
	}
	delete[] currencies;
	currencies = temp;
	size--;
}

void CentralBank::setRate(Currency& _current, float _rate)
{
	for (int i = 0; i < size; i++)
	{
		if (compare((currencies[i].getCurrency()), _current.getCurrency()))
		{
			currencies[i].setRate(_rate);
		}
	}
}