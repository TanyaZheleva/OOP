#pragma once
#include <iostream>

class Timestamp
{
public:
	Timestamp();
	Timestamp(unsigned long int _time);
	
	unsigned long getValue()const;
	void setValue(unsigned long int _time);
	
	Timestamp operator+(unsigned int d);
	void operator +=(unsigned int _add);
	friend std::ostream& operator <<(std::ostream& os, const Timestamp& rhs);
	friend std::istream& operator >>(std::istream& is, Timestamp& rhs);
private:
	unsigned long int time;
};