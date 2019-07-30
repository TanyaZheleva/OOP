#include "Stack.h"
#include <iostream>

Stack::Stack()
{

}

Stack::~Stack()
{

}


void Stack::push(int num)
{
	if (counter == StackCapacity)
	{
		std::cout << "Stack overflow!" << "\n";
	}
	stack[counter] = num;
	counter++;
}

void Stack::pop()
{
	if (counter == 0)
	{
		std::cout << "Empty Stack!" << "\n";
		return;
	}
	counter--;
}

int Stack::peek() const 
{
	if (counter == 0)
	{
		std::cout << "Empty Stack!";
		return -1;
	}
	return stack[counter-1];
}