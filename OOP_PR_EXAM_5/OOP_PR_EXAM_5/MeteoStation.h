#pragma once
#include "Observer.h"
class MeteoStation
{
public:
	MeteoStation(std::string _city, double _temperature);
	~MeteoStation();
	MeteoStation(const MeteoStation& old);
	MeteoStation& operator= (const MeteoStation& rhs);
	
	double getTemperature()const;
	std::string getCity() const;
	void setTemperature(double _temperature);
	void Register(Observer* _add);
	void unregister(Observer* _remove);
	void notify(double _temperature);
private:
	std::string city;
	double temperature;
	std::vector<Observer*> observers;

};

