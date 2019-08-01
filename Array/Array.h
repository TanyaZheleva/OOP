#pragma once

class Array
{
public:
	Array();
	~Array();
	void Resize(int s);//resizing the array to the size of s
	void InsertAt(int i, int value);//inserts an element at position i and pushes everything back
	int GetAt(int i);//returns the value of the element at position i
	int GetCapacity();//returns the capacity of the array
	int GetSize();//returns the number of elements in the array
	void PushBack(int value);//insert "value" at the next empty position and resizes if needed
	int PopBack();//remove last element and return it
	void RemoveAt(int i);//remove element at position i
	bool Empty();//returns true if the array is empty
	void Clear();//clears the whole array without deleting it
private:
	int* array;
	int capacity;
	int currentSize;
};

