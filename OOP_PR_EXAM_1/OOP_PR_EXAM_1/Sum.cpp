#include "Sum.h"

Sum::Sum(Expression * lhs, Expression * rhs):sum(0)
{
	expr1 = lhs->clone();
	expr2 = rhs->clone();
}

Sum::~Sum()
{
	delete expr1;
	delete expr2;
}

double Sum::value()
{
	sum = expr1->value() + expr2->value();
	return sum;
}

void Sum::print()
{
	expr1->print();
	std::cout << " + ";
	expr2->print();
}


