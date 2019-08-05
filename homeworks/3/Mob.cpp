#include "Mob.h"

Mob::Mob(Point2D * _location, std::string _name, unsigned int _damage, unsigned int _health)
:Entity(_location, _name), damage(_damage), health(_health) 
{
}

bool Mob::isAlive() const
{
	if (health> 0)
	{
		return true;
	}
	return false;
}

void Mob::attack(Player& other)
{
	if (getDistanceTo(other) < 5)
	{
		other.setHealth(other.getHealth() - damage);
	}
}

unsigned int Mob::getHealth() const
{
	return health;
}

unsigned int Mob::getDamage() const
{
	return damage;
}

void Mob::setHealth(unsigned int _health)
{
	if (_health > 0)
	{
		health = _health;
	}
	else
	{
		health = 0;
	}
}

Entity * Mob::clone() const
{
	return new Mob(*this);
}

type Mob::get() const
{
	return mob;
}
