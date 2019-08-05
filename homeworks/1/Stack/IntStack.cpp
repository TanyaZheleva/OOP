#include "IntStack.h"
#include <iostream>

IntStack::IntStack() :size(0), capacity(5)
{
	this->array = new int[capacity];
}

IntStack::~IntStack()
{
	delete[] this->array;
}

IntStack::IntStack(const IntStack& old) :size(old.size),
 capacity(old.capacity)
{
	array = new int[old.capacity];
	for (int i = 0; i < old.size; i++)
	{
		array[i] = old.array[i];
	}
}

IntStack& IntStack:: operator= (const IntStack& rhs)
{
	if (this != &rhs)
	{
		delete[] this->array;
		array = new int[rhs.capacity];
		for (int i = 0; i < rhs.size; i++)
		{
			array[i] = rhs.array[i];
		}
		this->size = rhs.size;
		this->capacity = rhs.capacity;
	}
	return *this;
}

const void IntStack::print()
{
	if (size == 0)
	{
		std::cout << "Empty stack!" << "\n";
	}
	else
	{
		for (int i = size; i > 0; i--)
		{
			std::cout << array[i - 1] << "\n";
		}
	}
}

void IntStack::Pop()
{

	if (size == 0)
	{
		std::cout << "Error! Empty Stack!";
	}
	size--;
}

void IntStack::Push(int num)
{
	if (size == capacity)
	{
		int* temp = new int[capacity*2];
		for (int i = 0; i < size; i++)
		{
			temp[i] = array[i];
		}
		delete[]array;
		array = temp;
		capacity *= 2;
	}
	array[size] = num;
	size++;
}

const int IntStack::Peek()
{
	if (size == 0)
	{
		std::cout << "Empty Stack!" << "\n";
		return -1;
	}

	return this->array[size - 1];
}

int IntStack::GetStackSize()
{
	return this->size;
}
