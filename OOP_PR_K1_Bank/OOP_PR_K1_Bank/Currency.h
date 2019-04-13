#pragma once
#include <iostream>
class Currency
{
public:
	Currency();
	Currency(const char* _currency, float _rate);
	~Currency();
	Currency(const Currency& old);
	Currency& operator =(const Currency& rhs);
	const char* getCurrency()const;
	const float getRate()const;
	void setCurrency(const char* _currency);
	void setRate(const float _rate);
	friend std::ostream& operator<<(std::ostream& os, Currency& _currency);
private:
	char* currency;
	float rate;
	int length;
};