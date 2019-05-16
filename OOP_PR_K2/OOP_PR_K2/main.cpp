#include "Empire.h"
#include "Slave.h"
#include "Soldier.h"
int main()
{
	Slave one("one", 20);
	Slave two("two", 35);
	Slave three("three", 19);
	Slave* slaves = new Slave[2];
	Soldier nameless("nameless", 21);

	Empire Roman(slaves, "Roman");
	Roman.addCitizen(nameless);
	return 0;
}