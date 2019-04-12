#pragma once

const int StackCapacity = 20;

class Stack
{
public:
	Stack();
	~Stack();
	void push(int num);
	void pop();
	int peek()const ;
private:
	int stack[StackCapacity];
	int counter = 0;
};