#pragma once

template<typename T>
class Set
{
public:
	Set();
	~Set();
	Set(const Set& old);
	Set& operator= (const Set& rhs);
	void insert(T _add);
	void erase(T _delete);
	bool contains(T _element);
	int Size();
	T operator[](int _index);
	Set& Union(const Set& rhs);
	Set& Intersection(const Set& rhs);
private:
	T* elements;
	int size;
	int current;
};

template <typename T>
Set<T>::Set() :size(10), current(0)
{
	elements = new T[size];
}

template <typename T>
Set<T>::~Set()
{
	delete[] elements;
}

template<typename T>
Set<T>::Set(const Set & old)
{
	size = old.size;
	current = old.current;
	delete[] elements;
	elements = new T[size];
	for (int i = 0; i < current; i++)
	{
		elements[i] = old.elements[i];
	}
}

template<typename T>
Set<T>& Set<T>::operator=(const Set& rhs)
{
	if (this != &rhs)
	{
		size = rhs.size;
		current = rhs.current;
		for (int i = 0; i < size; i++)
		{
			elements[i] = rhs.elements[i];
		}
	}
	return *this;
}

template<typename T>
void Set<T>::insert(T _add)
{

	if (contains(_add) == false)
	{
		if (current >= size)
		{
			T* temp = new T[size * 2];
			for (int i = 0; i < size; i++)
			{
				temp[i] = elements[i];
			}
			temp[size] = _add;
			delete[]elements;
			elements = temp;
			current++;
			size *= 2;
		}
		else
		{
		elements[current] = _add;
		current++;
		}
	}
}

template<typename T>
void Set<T>::erase(T _delete)
{
	for (int i = 0; i < size; i++)
	{
		if (_delete == elements[i])
		{
			T* temp = new T[size - 1];
			int index = 0;
			for (int j = 0; j < size - 1; j++)
			{
				if (j == i)
				{
					index++;
				}
				temp[j] = elements[index];
				index++;
			}
			delete[]elements;
			elements = temp;
			current--;
			size--;
		}
	}
}

template<typename T>
bool Set<T>::contains(T _element)
{
	for (int i = 0; i < size; i++)
	{
		if (_element == elements[i])
		{
			return true;
		}
	}
	return false;
}

template<typename T>
int Set<T>::Size()
{
	return size;
}

template<typename T>
T Set<T>::operator[](int _index)
{
	return elements[_index];
}

template<typename T>
Set<T>& Set<T>::Union(const Set & rhs)
{
	T* temp = new T[size + rhs.size];
	int j = 0;
	for (int i = 0; i < size + rhs.size; i++)
	{
		if (i < size)
		{
			temp[i] = elements[i];
		}
		if (i >= size && i < size + rhs.size)
		{
			temp[i] = rhs.elements[j];
			j++;
		}
	}
	delete[] elements;
	elements = temp;
	size += rhs.size;
	current += rhs.current;
	return *this;
}

template<typename T>
Set<T>& Set<T>::Intersection(const Set & rhs)
{

	T* temp = new T[size];
	int tempCurrent = 0;
	for (int i = 0; i < size; i++)
	{
		if (contains(rhs.elements[i]) == true)
		{
			temp[tempCurrent] = elements[i];
			tempCurrent++;
		}
	}
	delete[] elements;
	elements = temp;
	current = tempCurrent;
	return *this;
}


