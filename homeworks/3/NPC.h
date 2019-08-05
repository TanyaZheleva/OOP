#pragma once
#include "Entity.h"


class NPC :public Entity
{
public:
	NPC(Point2D* _location = &Point2D(), std::string _name="");
	bool isAlive()const override;
	Entity* clone()const override;
	type get()const override;
private:
	type npc;
};

