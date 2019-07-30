#pragma once
#include "Slave.h"

class Trader:public Slave
{

public:
	Trader(const char* _name, unsigned int _age);
	//~Trader();
	void Work()override;
	citizen get()const override;
};