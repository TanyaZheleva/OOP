#pragma once
#include <iostream>
class Temperature
{
public:
	Temperature();
	Temperature(int _min, int _avg, int _max);
	//Temperature(const Temperature& old);
	
	const int getMin()const;
	const int getAvg()const;
	const int getMax()const;
	const int GetAmplitude();

	void setMin(int _min);
	void setMax(int _max);
	void setAvg(int _avg);

	bool operator==(const Temperature& rhs);
	bool operator!=(const Temperature& rhs);
	bool operator< (const Temperature& rhs);
	bool operator> (const Temperature& rhs);
	bool operator<=(const Temperature& rhs);
	bool operator>=(const Temperature& rhs);

	friend std::ostream& operator<<(std::ostream& os, const Temperature& rhs);

private:
	int min;
	int avg;
	int max;
};