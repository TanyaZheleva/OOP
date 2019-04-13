#include "MeteoStation.h"

MeteoStation::MeteoStation():temperature(0),size(10)
{
	this->city = new char [size];
	city[0] = '\0';
}

MeteoStation::~MeteoStation()
{
	delete[] this->city;
}

MeteoStation::MeteoStation(const MeteoStation& old) :
	size(old.size), temperature(old.temperature)
{
	delete[] city;
	int length = strlen(old.city);
	city = new char[length+1];
	for (int i = 0; i < length; i++)
	{
		city[i] = old.city[i];
	}
	city[length] = '\0';
}

MeteoStation& MeteoStation::operator=(const MeteoStation& rhs)
{
	if (this != &rhs)
	{
		size = rhs.size;
		temperature = rhs.temperature;
		delete[] city;
		int length = strlen(rhs.city);
		city = new char[length + 1];
		for (int i = 0; i < length; i++)
		{
			city[i] = rhs.city[i];
		}
		city[length] = '\0';
	}
	return *this;
}

const char* MeteoStation::getCity()const
{
	return this->city;
}

const double MeteoStation::getTemperature()const
{
	return this->temperature;
}

void MeteoStation::SetCity(const char* _city)
{
	int length = strlen(_city);
	delete[] city;
	city = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		city[i] = _city[i];
	}
	city[length] = '\0';
	size = length;
}

void MeteoStation::setTemperature(const double _temperature)
{
	this->temperature = _temperature;
}