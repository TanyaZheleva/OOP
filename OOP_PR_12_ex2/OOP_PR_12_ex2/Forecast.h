#pragma once
#include"Temperature.h"

class Forecast
{
public:
	Forecast();
	Forecast(const Forecast& old);
	Forecast& operator=(const Forecast& rhs);

	~Forecast();

private:
	char* name;
	Temperature temp;
};