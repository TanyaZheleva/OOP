#include <iostream>
#include "IntStack.h"

IntStack sortStack(IntStack _stack)
{
	int tempSize = _stack.GetStackSize();
	int* temp = new int[tempSize];
	for (int i = 0; i < tempSize; i++)
	{
		temp[i] = _stack.Peek();
		_stack.Pop();
	}

	for (int i = 0; i < tempSize; i++)
	{
		bool swapped = false;
		for (int j = 0; j < tempSize - 1; j++)
		{
			if (temp[j] > temp[j + 1])
			{
				int swap = temp[j];
				temp[j] = temp[j + 1];
				temp[j + 1] = swap;
				swapped = true;
			}
		}
		if (swapped == false)
		{
			break;
		}
	}

	for (int i = 0; i < tempSize; i++)
	{
		std::cout << "Pushed" << temp[i] << "\n";
		_stack.Push(temp[i]);
	}
	delete[] temp;
	return _stack;
}

int main()
{
	IntStack stack;
	stack.Push(4);
	stack.Push(2);
	stack.Push(8);
	stack.Push(-7);
	stack.Push(41);
	stack.Push(-15);
	stack.Push(7);
	stack.Push(9);
	stack.Push(10);
	stack.Push(23);
	stack.Push(100);
	stack.Push(-5);
	stack.Push(77);
	stack.Pop();
	
	stack.print();

	stack= sortStack(stack);

	stack.print();

	return 0;
}
