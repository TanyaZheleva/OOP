#include "Expression.h"

double Expression::value()
{
	return expression;
}

void Expression::print()
{
	std::cout << expression << '\n';
}

Expression::~Expression()
{}

Expression * Expression::clone() const
{
	return nullptr;
}