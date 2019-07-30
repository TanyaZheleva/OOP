#pragma once


class PhoneCall
{
public :
	PhoneCall();
	const unsigned int getlength();
	void setLength(const int _length);
	const long long int  getNumber();
	void setNumber(long long int   _number);
	const int getStart();
	void setStart(const int _start);
	float getPrice();


private:
	unsigned int length;
	long long int number;
	int start;
};