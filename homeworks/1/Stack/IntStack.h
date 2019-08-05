#pragma once

class IntStack
{
public:
	IntStack();
	IntStack(const IntStack& old);
	IntStack& operator= (const IntStack& rhs);
	~IntStack();
	const void print();
	void Pop();
	void Push(int num);
	const int Peek();
	int GetStackSize();

private:
	int* array;
	int size;
	int capacity;
};

