#pragma once

template <typename T>
class Sorted
{
public:
	Sorted();
	~Sorted();
	Sorted(Sorted<T>const& old);
	Sorted<T>& operator= (Sorted<T> const& rhs);
	void add(T& element);
	void remove(T& element);
	void print();
private:
	T* sorted;
	int capacity;
	int size;
};