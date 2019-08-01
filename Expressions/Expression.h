#pragma once
#include <iostream>
class Expression
{
public:
	virtual double value() = 0;
	virtual void print() = 0;
	virtual ~Expression();
	virtual Expression* clone()const ;
private:
	double expression;
};

