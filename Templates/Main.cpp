#include <iostream>
template <typename T>
T median(T* collection, int size)
{
	if (size % 2 == 0)
	{
		T mid = (collection[size / 2] + collection[(size / 2) + 1]) / 2;
		return mid;
	}
	return collection[(size / 2) + 1];
}

template <typename T>
T max(T* collection, int size)
{
	T max = collection[0];
	for (int i = 0; i < size; i++)
	{
		if (max < collection[i])
		{
			max = collection[i];
		}
	}
	return max;
}

template <typename T>
T moda(T* collection, int size)
{
	for (int i = 0; i < size; i++)
	{
		T moda[i] = 0;
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (collection[i] == collection[j])
			{
				moda[i]++;
			}
		}
	}
	T Moda = max<T>(moda, size);
	return Moda;
}


template<typename T>
T accumulates(T* collection, int size)
{
	T sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += collection[i];
	}
	return sum;
}

template <typename T>
T average(T* collection, int size)
{
	T sum = accumulates<T>(collection, size);
	return sum / size;
}

template<typename T>
T min(T* collection, int size)
{
	T min = collection[0];
	for (int i = 0; i < size; i++)
	{
		if (min > collection[i])
		{
			min = collection[i];
		}
	}
	return min;
}

template <typename T>
T* reverse(T* collection, int size)
{
	for (int i = 0; i < size; i++)
	{
		T temp = collection[i];
		collection[i] = collection[i + 1];
		collection[i + 1] = temp;
	}
	return collection;
}

template <typename T>
T* take(T* collection, int size, int n)
{
	for (int i = 0; i <= n; i++)
	{
		return collection[i];
	}
}

template <typename T>
T* skip(T* collection, int size, int n)
{
	for (int i = n+1; i < size; i++)
	{
		return collection[i];
	}
}

int main()
{
	int array[10] = { 1,4,3,2,3,2,1,2,1,2 };
	int mod = moda<int>(array, 10);
	std::cout << mod;

	return 0;
}