#pragma once
#include "Player.h"
#include "Entity.h"

class Player;
class Mob :	public Entity
{
public:
	Mob(Point2D* _location = &Point2D(), std::string _name="", unsigned int _damage=0, unsigned int _health=0);
	bool isAlive()const override;
	void attack(Player& other);
	unsigned int getHealth() const;
	unsigned int getDamage() const;
	void setHealth(unsigned int _health);
	Entity* clone() const override;
	type get()const override;
private:
	type mob;
	unsigned int damage;
	unsigned int health;
};
