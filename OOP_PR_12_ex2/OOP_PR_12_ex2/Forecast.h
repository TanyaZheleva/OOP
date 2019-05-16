#pragma once
#include"Temperature.h"

class Forecast
{
public:
	Forecast();
	Forecast(const char* _place, Temperature const& _temp);
	Forecast(const Forecast& old);
	Forecast& operator=(const Forecast& rhs);
	~Forecast();

	const char* getPlace()const;
	Temperature getTemp()const;
	void setPlace(const char* _place);
	void setTemp(const Temperature& _temp);
	void UpdateIfHotter(Forecast const& F);

	friend std::ostream& operator<<(std::ostream& os, const Forecast& rhs);
	friend std::istream& operator>>(std::istream& is, Forecast& rhs);

private:
	char* place;
	Temperature temp;
};