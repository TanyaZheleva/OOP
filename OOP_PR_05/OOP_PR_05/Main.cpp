#include <iostream>
#include "Array.h"

int main()
{
	Array arr;
	for (int i = 0; i < 10; i++)
	{
	   arr.PushBack(i);
	}
	std::cout << "Capacity:: "<< arr.GetCapacity() << "\n";
	std::cout << "Element at index 6: "<< arr.GetAt(6) << "\n";
	std::cout << "Last element: "<< arr.PopBack() << "\n";
	std::cout << "Capacity: " << arr.GetCapacity() << "\n";
	arr.InsertAt(2, 19);
	std::cout << "Current Size: " << arr.GetSize() << "\n";
	arr.RemoveAt(3);
	std::cout << "Current Size: " << arr.GetSize() << "\n";
	for (int i = 0; i < arr.GetSize(); i++)
	{
		std::cout << "Element at index "<<i<<": " << arr.GetAt(i) << "\n";
	}
	arr.Clear();
	std::cout << arr.Empty() << "\n";
	return 0;
}