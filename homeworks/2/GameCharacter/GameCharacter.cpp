#include "GameCharacter.h"


GameCharacter::GameCharacter(const char * _name,
	const unsigned int _HP, const unsigned int _MP,
	const unsigned int _AP, const unsigned int _DP):
	HP(_HP),MP(_MP),AP(_AP),DP(_DP)
{
	setName(_name);
}


GameCharacter::~GameCharacter()
{
	delete[] name;
}

GameCharacter::GameCharacter(const GameCharacter & old) :HP(old.HP),
MP(old.MP), AP(old.AP), DP(old.DP)
{
	this->setName(old.name);
}

GameCharacter & GameCharacter::operator=(const GameCharacter & rhs)
{
	if (this != &rhs)
	{
		delete[]name;
		setName(rhs.name);
		HP = rhs.HP;
		MP = rhs.MP;
		AP = rhs.AP;
		DP = rhs.DP;
	}
	return *this;
}

void GameCharacter::getAttacked(const int enemyAP)
{
	int points = enemyAP - DP;
	if (points > 0)
	{
		if (HP < points)
		{
			HP = 0;
		}
		else
		{
			HP -= points;
		}
	}
}

void GameCharacter::setName(const char * _name)
{
	int length = strlen(_name);
	name = new char[length + 1];
	for (int i = 0; i <= length; i++)
	{
		name[i] = _name[i];
	}
}
