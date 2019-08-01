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

Product::Product(const Product & old)
{
	product = old.product;
	expr1 = old.expr1->clone();
	expr2 = old.expr2->clone();
}

Product & Product::operator=(const Product & rhs)
{
	if (this != &rhs)
	{
		product = rhs.product;
		expr1 = rhs.expr1->clone();
		expr2 = rhs.expr2->clone();
}
}

double Product::value()
{
	product = expr1->value()*expr2->value();
	return product;
}

void Product::print()
{
	expr1->print();
	std::cout << " * ";
	expr2->print();
}

Expression * Product::clone() const
{
	return new Product(*this);
}
