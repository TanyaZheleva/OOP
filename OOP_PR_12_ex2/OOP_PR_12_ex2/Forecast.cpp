#include "Forecast.h"

Forecast::Forecast()
{
	temp.setMin(0);
	temp.setMax(0);
	temp.setAvg(0);
	place = new char[1];
	place[0] = '\0';
}

Forecast::Forecast(const char * _place, Temperature const & _temp)
{
	this->setPlace(_place);
	this->getTemp(_temp);
}

Forecast::Forecast(const Forecast & old)
{
	//Temperature(old);
	
}

Forecast::~Forecast()
{
	delete[] place;
}

const char * Forecast::getPlace() const
{
	return place;
}

Temperature& Forecast::getTemp() const
{
	return temp;
}
