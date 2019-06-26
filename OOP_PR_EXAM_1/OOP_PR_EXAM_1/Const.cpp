#include "Const.h"

Const::Const(const double constexp):
	constExpression(constexp)
{}

double Const::value()
{
	return constExpression;
}

void Const::print()
{
	std::cout << this->value();
}

Expression * Const::clone() const
{
	return new Const(*this);
}


//Const::~Const(){}
