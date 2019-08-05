#include<iostream>
#include "Passanger.h"
#include "Bus.h"

int main()
{
	Passanger p1("David", 24, true);
	Passanger p2("Percy", 15, false);
	Passanger p3 = p2;
	Passanger p4;
	p4 = p1;
	Bus b1;
	b1.AddPassanger(p1);
	b1.AddPassanger(p2);
	b1.AddPassanger(p3);
	b1.AddPassanger(p4);
	//b1.printAll();
	//b1.PrintGratis();
	//b1.TakeDownGratis();
	b1.TakeDownPassanger("David");
	b1.printAll();
	return 0;
}