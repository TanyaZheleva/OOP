#pragma once
#include "Mob.h"
#include "Entity.h"

class Mob;
class Player :public Entity
{
public:
	Player(Point2D* _location=&Point2D(), std::string _name="", unsigned int _damage=0, unsigned int _health=0);
	bool isAlive()const override;
	virtual void attack(Player& other);
	void attack(Mob& other);
	
	unsigned int getDamage()const;
	unsigned int getHealth()const;
	void setHealth(unsigned int _health);
	Entity* clone()const override;
	type get()const override;
private:
	type player;
	unsigned int damage;
	unsigned int health;
};
