#pragma once
#include "Expression.h"

class Product :
	public Expression
{
public:
	Product(Expression* _expr1,Expression* _expr2);
	~Product();
	double value() override;
	void print()override;
private:
	double product;
	Expression* expr1;
	Expression* expr2;
};

