#include "Set.h"
#include <iostream>

int main()
{
	Set<int> numbers;
	std::cout << numbers.Size()<<"\n";
	for (int i = 0; i < 16; i++)
	{
		numbers.insert(i);
	}
	std::cout << numbers.Size();
	numbers.erase(10);
	std::cout << "Contains 10? : " << numbers.contains(10) << "\n";
	std::cout << "Element at index 10: " << numbers[10] << "\n";
	return 0;
}