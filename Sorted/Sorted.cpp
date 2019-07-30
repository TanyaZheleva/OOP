#include "Sorted.h"

template <typename T>
inline Sorted<T>::Sorted() :size(0), capacity(10)
{
	sorted = new T[size];
}

template <typename T>
Sorted<T>::~Sorted()
{
	delete[] sorted;
}

template<typename T>
Sorted<T>::Sorted(Sorted<T>const& old) :size(old.size), capacity(old.capacity)
{
	sorted = new T[size];
	for (int i = 0; i < size; i++)
	{
		sorted[i] = old.sorted[i];
	}
}

template<typename T>
Sorted<T>& Sorted<T>:: operator=(Sorted<T> const& rhs)
{
	if (this != &rhs)
	{
		capacity = rhs.capacity;
		size = rhs.size;
		delete[] sorted;
		sorted = new T[size];
		for (int i = 0; i < size; i++)
		{
			sorted[i] = rhs.sorted[i];
		}
	}
	return *this;
}

template<typename T>
void Sorted<T>::add(T & element)
{
	if (size == capacity)
	{
		resize();
	}
	sorted[size] = element;
	size++;
}

template <typename T>
void Sorted<T>::remove(T& element)
{
	T* temp = new T[size - 1];
	for (int i = 0; i <= size; i++)
	{
		while (sorted[i] != element)
		{
			for (int j = 0; j < size; j++)
			{
				temp[j] = sorted[i];
			}
		}
	}
	size--;
}

template<typename T>
void Sorted <T>::print()
{
	for (int i = 0; i < size; i++)
	{
		std::cout << sorted[i] << "\n";
	}
}
