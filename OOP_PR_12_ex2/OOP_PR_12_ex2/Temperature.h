#pragma once

class Temperature
{
public:
	Temperature();
	Temperature(int _min, int _avg, int _max);
	
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
private:
	int min;
	int avg;
	int max;
};