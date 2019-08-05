#include "Environment.h"

int main()
{
	Player Player1;
	Environment* env = Environment::instance();
	env->generateEntities();
	Mob thisMob;
	for (unsigned int i = 0; i < env->size(); i++)
	{
		thisMob = *(Mob*)(env->getClosestAliveEntity(Player1, mob));
		Player1.attack(thisMob);
	}
	return 0;
}