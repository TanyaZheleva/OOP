#pragma once
#include "Expression.h"

class Sum:public Expression
{
public:
	Sum(Expression* lhs,Expression* rhs);
	~Sum();
	double value() override;
	void print()override;
private:
	double sum;
	Expression* expr1;
	Expression* expr2;
};

