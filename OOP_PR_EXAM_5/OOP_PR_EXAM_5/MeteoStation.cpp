#include "MeteoStation.h"

MeteoStation::MeteoStation(std::string _city, double _temperature)
	:city(_city), temperature(_temperature)
{}

MeteoStation::~MeteoStation()
{
	for (unsigned int i = 0; i < observers.size(); i++)
	{
		delete observers[i];
	}
}

MeteoStation::MeteoStation(const MeteoStation & old) :
	city(old.city), temperature(old.temperature)
{
	for (unsigned int i = 0; i < observers.size(); i++)
	{
		observers[i] = old.observers[i]->clone();
	}
}

MeteoStation & MeteoStation::operator=(const MeteoStation & rhs)
{
	if (this != &rhs)
	{
		city = rhs.city;
		temperature = rhs.temperature;
		for (unsigned int i = 0; i < observers.size(); i++)
		{
			delete observers[i];
		}

		for (unsigned int i = 0; i < observers.size(); i++)
		{

			observers[i] = rhs.observers[i]->clone();
		}
	}
	return *this;
}

double MeteoStation::getTemperature() const
{
	return temperature;
}

std::string MeteoStation::getCity() const
{
	return city;
}

void MeteoStation::setTemperature(double _temperature)
{
	temperature = _temperature;
	notify(_temperature);
}

void MeteoStation::Register(Observer * _add)
{
	observers.push_back(_add->clone());
}


void MeteoStation::unregister(Observer * _remove)
{
	int index = 0;
	unsigned int size = observers.size();
	std::string _removeName = _remove->getName();
	for (unsigned int i = 0; i < size; i++)
	{
		std::string currentName = observers[i]->getName();
		if (currentName == _removeName)
		{
			index = i;
		}
	}
	observers.erase(observers.begin() + index);
	/*if (index < 0)
	{
		observers.erase(observers.begin());
	}
	else
	{
		observers.erase(observers.begin() + index);
	}*/
}

void MeteoStation::notify(double _temperature)
{
	unsigned int size = observers.size();
	for (unsigned int i = 0; i < size; i++)
	{
		observers[i]->update(city, _temperature);
	}
}


