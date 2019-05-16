#pragma once
#include "Slave.h"

class Soldier: public Slave
{
public:
	Soldier(const char* _name, unsigned int _age);
	//~Soldier();
	void Work()override;
	citizen get()const override;
};
