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
	this->setTemp(_temp);
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

void Forecast::setPlace(const char * _place)
{
	int length = strlen(_place);
	place = new char[length + 1];
	for (int i = 0; i <= length; i++)
	{
		place[i] = _place[i];
	}
}

void Forecast::setTemp(const Temperature & _temp)
{
	temp.setMin(_temp.getMin());
	temp.setMax(_temp.getMax());
	temp.setAvg(_temp.getAvg());
}
