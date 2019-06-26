#include "CentralBank.h"
#include "ConcreteObserver.h"

int main()
{
	CentralBank BNB("BNB");
	BNB.addCurrency("usd");
	BNB.addCurrency("eur");
	BNB.addCurrency("bgl");
	ConcreteObserver one;
	ConcreteObserver two;
	ConcreteObserver three;
	Observer* p1 = &one;
	Observer* p2 = &two;
	Observer* p3 = &three;
	BNB.Register(p1);
	BNB.Register(p2);
	BNB.Register(p3);
	BNB.setRate("usd", 2.8);
	BNB.unregister(p3);
	BNB.setRate("eur", 1.8);
	return 0;
}