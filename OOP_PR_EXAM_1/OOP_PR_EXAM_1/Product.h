#pragma once
#include "Expression.h"

class Product : virtual public Expression
{
public:
	Product(Expression* _expr1,Expression* _expr2);
	virtual ~Product();
	Product(const Product& old);
	Product& operator= (const Product& rhs);
	double value() override;
	void print()override;
	Expression* clone()const override;
private:
	double product;
	Expression* expr1;
	Expression* expr2;
};

