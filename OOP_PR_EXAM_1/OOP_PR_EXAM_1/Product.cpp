#include "Product.h"

Product::Product(Expression * _expr1, Expression * _expr2)
:product(0)
{
	expr1 = _expr1->clone();
	expr2 = _expr2->clone();
}

Product::~Product()
{
	delete expr1;
	delete expr2;
}

double Product::value()
{
	product = expr1->value()*expr2->value();
	return product;
}

void Product::print()
{
	expr1->print;
	std::cout << " * ";
	expr2->print;
}
