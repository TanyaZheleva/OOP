#include "PhoneCall.h"

PhoneCall::PhoneCall()
{
}
const unsigned int PhoneCall::getlength()
{
	return this->length;
}
void PhoneCall::setLength(const int _length)
{
	this->length = _length;
}
const long long int PhoneCall::getNumber()
{
	return this->number;
}
void PhoneCall::setNumber(long long int _number)
{
	this->number = _number;
}
const int PhoneCall::getStart()
{
	return this->start;
}
void PhoneCall::setStart(const int _start)
{
	this->start = _start;
}
float PhoneCall::getPrice()
{
	float pricePerMinute = 0.1;
	float priceOfCall = pricePerMinute * length;
	return priceOfCall;
}