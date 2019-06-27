#pragma once
#include "Expression.h"
class Const :virtual public Expression
{
public:
	Const(const double constexp);
	virtual ~Const() {};
	double value() override;
	void print() override;
	Expression* clone()const override;
private:
	const double constExpression;
};

