#pragma once
#include <iostream>
#include <ctime>

template <typename T>
class MagicBox
{
public:
	MagicBox();
	~MagicBox();
	MagicBox(const MagicBox& old);
	MagicBox<T>& operator=(const MagicBox<T>& rhs);

	void setArr(const T* _arr);
	T* getArr()const;

	void insert(const T _arr);
	void pop();
	void list()const;
private:
	T* arr;
	unsigned int size;
};

template<typename T>
inline MagicBox<T>::MagicBox() : size(1)
{
	arr = new T[size];
}

template<typename T>
inline MagicBox<T>::~MagicBox()
{
	delete[] arr;
}

template<typename T>
inline MagicBox<T>::MagicBox(const MagicBox & old) :size(old.size)
{
	setArr(old.arr);
}

template<typename T>
inline MagicBox<T>& MagicBox<T>::operator=(const MagicBox<T>& rhs)
{
	if (this != &rhs)
	{
		size = rhs.size;
		delete[] arr;
		setArr(rhs.arr);
	}
	return *this;
}

template<typename T>
inline void MagicBox<T>::setArr(const T* _arr)
{
	arr = new T[size];
	for (unsigned int i = 0; i < size; i++)
	{
		arr[i] = _arr[i];
	}
}

template<typename T>
inline T* MagicBox<T>::getArr() const
{
	return arr;
}

template<typename T>
inline void MagicBox<T>::insert(const T _arr)
{
	T* temp = new T[size + 1];
	for (unsigned int i = 0; i < size - 1; i++)
	{
		temp[i] = arr[i];
	}
	delete[]arr;
	arr = temp;

	arr[size - 1] = _arr;
	size++;
}

template<typename T>
inline void MagicBox<T>::pop()
{
	if (size == 1)
	{
		std::cout << "Error! Empty!\n";
		return;
	}
	srand(time(NULL));
	unsigned int random = rand() % (size-1);
	T* temp = new T[size];
	int j = 0;
	for (unsigned int i = 0; i < size-1; i++)
	{
		if (i != random)
		{
			temp[j] = arr[i];
			j++;
		}
	}
	arr = temp;
	size--;
}

template<typename T>
inline void MagicBox<T>::list() const
{
	for (unsigned int i = 0; i < size - 1; i++)
	{
		std::cout << arr[i] << '\n';
	}
}



