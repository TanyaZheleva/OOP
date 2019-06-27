#pragma once
#include "Expression.h"
class Var :virtual public Expression
{
public:
	Var(const char* _name="",double _value=0.0);
	virtual ~Var();
	Var (const Var& old);
	Var& operator=(const Var& rhs);
	void setName(const char* _name);
	void setValue(double _Value);
	double value()override;
	void print() override;
	Expression* clone()const override;
private:
	char* name=nullptr;
	double Value;
};

