#include "Consortium.h"
#include"PrivateCompany.h"
#include "StateOwnedCompany.h"
int main()

{
	Consortium aa ("Avtomagistralni Avanturisti");
	PrivateCompany bb ("Balgarski Bageri", 2);
	StateOwnedCompany cc("Varhovni Vlekachi");
	
	aa.addCompany((Company*)&bb);
	aa.addCompany((Company*)&cc);

	Consortium dd("Грандиозни Грънчари");
	PrivateCompany ee("Далновидни Дърводелци", 4);
	
	dd.addCompany((Company*)&ee);

	aa.printStatus();
	
	return 0;
}