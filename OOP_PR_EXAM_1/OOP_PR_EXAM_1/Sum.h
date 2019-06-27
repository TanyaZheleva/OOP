#pragma once
#include "Expression.h"

class Sum:virtual public Expression
{
public:
	Sum(Expression* lhs,Expression* rhs);
	virtual ~Sum();
	Sum(const Sum& old);
	Sum& operator= (const Sum& rhs);
	double value() override;
	void print()override;
	Expression* clone()const override;

private:
	double sum;
	Expression* expr1;
	Expression* expr2;
};

