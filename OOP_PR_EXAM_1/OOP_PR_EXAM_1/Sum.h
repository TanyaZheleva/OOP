#pragma once
#include "Expression.h"

class Sum:public Expression
{
public:
	Sum(Expression* lhs,Expression* rhs);
	virtual ~Sum();
	double value() override;
	void print()override;
	Expression* clone()const override;

private:
	double sum;
	Expression* expr1;
	Expression* expr2;
};

