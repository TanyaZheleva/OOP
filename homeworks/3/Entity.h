#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Point3D.h"
enum type
{
	entity,
	player,
	npc,
	mob
};
class Entity
{
public:
	Entity(Point2D* _location, std::string _name);
	Entity(const Entity& old);
	Entity& operator= (const Entity& other);
	virtual ~Entity();
	virtual bool isAlive()const;
	double getDistanceTo2D(const Entity& other);
	double getDistanceTo(const Entity& other);
	void  moveTo(const Point2D* _location);
	void  moveTo(const Entity& other);
	virtual Entity* clone()const;
	virtual type get()const=0;

private:
	unsigned int id;
	static std::vector<unsigned int> nextId;
	Point2D* location;
	std::string name;
};

