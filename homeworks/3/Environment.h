#pragma once
#include "Player.h"
#include "NPC.h"

class Environment
{
public:
	static Environment * instance()
	{
		static Environment instance;
		return &instance;
	}
	void add(const Entity& _entity);
	Entity* getAt(unsigned int index);
	void removeAt(unsigned int index);
	void generateEntities();
	void destroyEntities();
	Entity* getClosestAliveEntity(Player& rhs, type _type);
	unsigned int size()const;
	std::vector<Entity*> getEntities()const;
private:
	Environment();
	std::vector<Entity*> entities;
};