#pragma once
#include <iostream>

class GameCharacter
{
	void setName(const char* _name);
protected:
	GameCharacter(const char* _name,const unsigned int _HP,
		const unsigned int _MP, const unsigned int _AP, 
		const unsigned int _DP);
	GameCharacter(const GameCharacter& old);
	GameCharacter& operator=(const GameCharacter& rhs);
public:
	~GameCharacter();
	void getAttacked(const int enemyAP);
private:
	char* name;
	 unsigned int HP;
	 unsigned int MP;
	 unsigned int AP;
	 unsigned int DP;
};