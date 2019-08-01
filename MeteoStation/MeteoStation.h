#pragma once
#include<iostream>

class MeteoStation
{
public:
	MeteoStation();
	~MeteoStation();
	MeteoStation(const MeteoStation& old);
	MeteoStation& operator=(const MeteoStation& rhs);
	
	const char* getCity()const;
	const double getTemperature()const;
	void SetCity(const char* _city);
	void setTemperature(const double _temperature);

private:
	char* city;
	double temperature;
	int size;
};

