#include "Environment.h"

Environment::Environment():entities()
{
}

void Environment::add(const Entity& _entity)
{
	int size = entities.size();
	for (int i = 0; i <= size; i++)
	{
		entities.push_back(_entity.clone());

	}
}

Entity* Environment::getAt(unsigned int index)
{
	int size = entities.size();
	return entities.at(index)->clone();
}

void Environment::removeAt(unsigned int index)
{
	if (index < entities.size())
	{
		entities.erase(entities.begin() + index);
	}
}

void Environment::generateEntities()
{
	for (int i = 0; i < 4; i++)
	{
		int num = (rand() % 3) + 1;
		switch (num)
		{
		case 1:
		{
			Player one;
			add(one);
		}break;
		case 2:
		{
			Mob two;
			add(two);
		}break;
		case 3:
		{
			NPC three;
			add(three);
		}break;
		}
	}
}

void Environment::destroyEntities()
{
	entities.clear();
}

Entity* Environment::getClosestAliveEntity(Player & rhs, type _type)
{
	int size = entities.size();
	double minDistance = 0;
	double currentDistance = 0;
	int index = 0;
	for (int i = 0; i < size; i++)
	{
		if ((entities[i]->get()) == _type && (entities[i]->isAlive()) == 1)
		{
			minDistance= rhs.getDistanceTo(*entities[i]);
			break;
		}
	}
	for (int i = 0; i < size; i++)
	{
		if ((entities[i]->get()) == _type && (entities[i]->isAlive()) == 1)
		{
			currentDistance = rhs.getDistanceTo(*entities[i]);
			if (currentDistance<minDistance)
			{
				minDistance = currentDistance;
				index = i;
			}
		}
	}
	return entities[index]->clone();
}

unsigned int Environment::size() const
{
	return entities.size();
}

std::vector<Entity*> Environment::getEntities() const
{
	return entities;
}
