#pragma once

class Price
{
public:
	Price();
	~Price();
	int getPrice();
	void setPrice(int);
private:
	int price = 1000;
};

