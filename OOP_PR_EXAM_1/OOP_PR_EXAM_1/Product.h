#pragma once
#include "Expression.h"

class Product :
	public Expression
{
public:
	Product(Expression* _expr1,Expression* _expr2);
	virtual ~Product();
	double value() override;
	void print()override;
	Expression* clone()const override;
private:
	double product;
	Expression* expr1;
	Expression* expr2;
};

