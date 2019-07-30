#pragma once
#include "Soldier.h"

class Swordsman:public Soldier
{
public:
	Swordsman(const char* _name, unsigned int _age);
	//~Swordsman();
	void Work()override;
	citizen get()const override;
};