#include "Player.h"

Player::Player(Point2D * _location, std::string _name, unsigned int _damage, unsigned int _health)
:Entity(_location,_name),damage(_damage),health(_health)
{
}


bool Player::isAlive() const
{
	if (health > 0)
	{
		return true;
	}
	return false;
}

void Player::attack(Player& other)
{
	if (getDistanceTo(other) < 5)
	{
		other.setHealth(other.getHealth() - damage);
	}
}

void Player::attack(Mob& other)
{
	if (getDistanceTo(other) < 5)
	{
		other.setHealth(other.getHealth() - damage);
	}
}

unsigned int Player::getDamage() const
{
	return damage;
}

unsigned int Player::getHealth() const
{
	return health;
}

void Player::setHealth(unsigned int _health)
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

Entity * Player::clone() const
{
	return new Player(*this);
}

type Player::get() const
{
	return player;
}
