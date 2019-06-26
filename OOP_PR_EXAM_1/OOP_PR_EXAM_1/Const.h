#pragma once
#include "Expression.h"
class Const :public Expression
{
public:
	Const(const double constexp);
	double value() override;
	void print() override;
	Expression* clone()const override;
private:
	const double constExpression;
};

