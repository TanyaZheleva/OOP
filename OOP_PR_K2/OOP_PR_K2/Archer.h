#pragma once
#include "Soldier.h"

class Archer:public Soldier
{
public:
	Archer(const char* _name, unsigned int _age);
	//~Archer();
	void Work() override;
	citizen get()const override;

};