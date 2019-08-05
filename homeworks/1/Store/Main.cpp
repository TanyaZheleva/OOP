#include "Product.h"
#include "Store.h"

void printMenu();

int main()
{
	Store newStore;
	char caseName = '\0';

	while (caseName != 'Q')
	{
		printMenu();
		std::cin >> caseName;
		switch (caseName)
		{
		case 'A':
		{
			Product newProduct;
			std::cin >> newProduct;
			newStore.Add(newProduct);
			std::cout << "Done!" << "\n";
		}break;
		case 'X':
		{
			Product toDelete;
			std::cin >> toDelete;
			newStore.deleteItem(toDelete);
			std::cout << "Done!" << "\n";

		}break;
		case 'C':
		{
			Product toChange;
			std::cout << "Enter SKU of the product you want to change" << "\n";
			unsigned int toChangeSKU;
			std::cin >> toChangeSKU;
			toChange.changeSKU(toChangeSKU);
			Product changeWith;
			std::cin >> changeWith;
			newStore.changeItem(toChange.getSKU(), changeWith);
			std::cout << "Done!" << "\n";

		}break;
		case 'D':
		{
			newStore.print();
			std::cout << "Done!" << "\n";
		}break;
		case 'Q': break;
		}
	}
	return 0;
}