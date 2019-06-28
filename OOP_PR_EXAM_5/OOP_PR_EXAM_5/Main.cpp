#include "MeteoStation.h"
#include "NewspaperObserver.h"

int main()
{
	MeteoStation BNMS("Sofia", 30);
	
	NewspaperObserver one("one", "sofia", 30);
	NewspaperObserver two("two", "Varna", 28);
	NewspaperObserver three("three", "Plovdiv", 32);
	NewspaperObserver four("four", "Burgas", 26);
	
	BNMS.Register(one.clone());
	BNMS.Register(two.clone());
	BNMS.Register(three.clone());
	BNMS.Register(four.clone());

	BNMS.setTemperature(31);

	one.printMeteo();
	two.printMeteo();
	three.printMeteo();
	four.printMeteo();

	BNMS.unregister(two.clone());

	BNMS.setTemperature(29);

	one.printMeteo();
	two.printMeteo();
	three.printMeteo();
	four.printMeteo();

return 0;
}