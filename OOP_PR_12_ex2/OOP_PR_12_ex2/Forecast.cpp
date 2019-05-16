#include "Forecast.h"

Forecast::Forecast()
{
	temp= Temperature();
	name = new char[1];
	name[0] = '\0';
}

Forecast::Forecast(const Forecast & old)
{
	Temperature(old);

}

Forecast::~Forecast()
{
	delete[] name;
}