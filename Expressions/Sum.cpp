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

Sum::Sum(const Sum & old)
{
	sum = old.sum;
	expr1 = old.expr1->clone();
	expr2 = old.expr2->clone();
}

Sum & Sum::operator=(const Sum & rhs)
{
	if (this != &rhs)
	{
		sum = rhs.sum;
		expr1 = rhs.expr1->clone();
		expr2 = rhs.expr2->clone();
	}
	return *this;
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

Expression * Sum::clone() const
{
	return new Sum(*this);
}


