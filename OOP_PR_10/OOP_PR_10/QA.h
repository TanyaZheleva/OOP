#pragma once
#include "IT.h"

class QA:public IT
{
public:
	QA(const char* _name = "", int _experience = 0, float _salary = 600.0f, int _productivity = 100, const char* _project = "", bool _manual = false);
	QA(const QA& old);
	void setManual(bool _manual);
	bool getManual()const;
	Employee* clone()const override;
	void print()const override;
	type get()const  override;
	float work()override;
private:
	bool manual;
};