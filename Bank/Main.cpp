#include "Currency.h"
#include "Central Bank.h"

int main()
{
	Currency one("bng", 1.2);
	Currency two=one;
	Currency three;
	three = two;
	one.setCurrency("sthreallong");

	CentralBank BNB;
	CentralBank NGN;
	NGN = BNB;

	BNB.addCurrency(one);
	BNB.addCurrency(two);
	BNB.addCurrency(three);

	BNB.deleteCurrency(two);
	BNB.setRate(one, 99.6);

	std::cout << one.getRate() << "\n";
	std::cout << one;

	return 0;
}