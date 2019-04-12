#include "Array.h"
#include <iostream>

void Array::Resize(int s)
{
	int* temp = new int[s];
	for (int i = 0; i < currentSize; i++)
	{
		temp[i] = array[i];
	}
	delete[] this->array;
	array = temp;
	capacity = s;
}

Array::Array()
{
	capacity = 2;
	currentSize = 0;
	this->array = new int[capacity];
}

Array::~Array()
{
	delete[] this->array;
}

void Array::InsertAt(int i, int value)
{
	if (currentSize == capacity)
	{
		Resize(capacity*2);
	}
	for (int j =currentSize; j > i; j--)
	{
		array[j] = array[j-1];
	}
	array[i] = value;
	currentSize++;
}

int Array::GetAt(int i)
{
	return array[i];
}

int Array::GetCapacity()
{
	return capacity;

}

int Array::GetSize()
{
	return currentSize;

}

void Array::PushBack(int value)
{
	if (currentSize == capacity)
	{
		Resize(capacity*2);
	}
	array[currentSize] = value;
	currentSize++;
}

int Array::PopBack()
{
	if (currentSize == 0)
	{
		std::cout << "Error!" << "\n";
		return -1;
	}
	else
	{
	return array[currentSize-1];
	currentSize--;
	}
}

void Array::RemoveAt(int i)
{
	for (int j = i; j <= currentSize; j++)
	{
		array[j] = array[j + 1];
	}
	currentSize--;
}

bool Array::Empty()
{
	if (currentSize == 0)
	{
		return true;
	}
	return false;
}

void Array::Clear()
{
	currentSize = 0;
}