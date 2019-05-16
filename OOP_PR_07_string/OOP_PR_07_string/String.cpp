#include "String.h"

String::String(const char* _string) : capacity(strlen(_string) + 1),
size(strlen(_string))
{
	string = new char[capacity];
	for (unsigned int i = 0; i < size; i++)
	{
		string[i] = _string[i];
	}
	string[capacity] = '\0';
}

String::String() :capacity(10), size(0)
{
	string = new char[capacity];
	string[size] = '\0';
}

String::~String()
{
	delete[] string;
}

String::String(const String & old) :capacity(old.capacity),
size(old.size)
{
	string = new char[capacity];
	for (unsigned int i = 0; i < capacity; i++)
	{
		string[i] = old.string[i];
	}
	string[size + 1] = '\0';
}

String & String::operator=(const String & rhs)
{
	if (this != &rhs)
	{
		delete[] string;
		capacity = rhs.capacity;
		size = rhs.size;
		string = new char[capacity];
		for (unsigned int i = 0; i < capacity; i++)
		{
			string[i] = rhs.string[i];
		}
		string[size + 1] = '\0';
	}
	return *this;
}

const char* String::operator =(const char* arr)
{
	delete[] string;
	capacity = strlen(arr);
	string = new char[capacity + 1];
	for (unsigned int i = 0; i < capacity; i++)
	{
		string[i] = arr[i];
	}
	string[capacity] = '\0';
	return string;
}

const char String::operator[](int num)
{
	return string[num];
}

String & String::operator+=(const String & rhs)
{
	capacity += rhs.capacity;
	char* temp = new char[capacity + 1];
	for (unsigned int i = 0; i < size; i++)
	{
		temp[i] = string[i];
	}
	temp[size] = '\0';

	delete[] string;
	string = temp;

	for (unsigned int i = size; i < capacity; i++)
	{
		string[i] = rhs.string[i];
	}
	string[capacity] = '\0';
	size += rhs.size;
	return *this;
}

const char * String::operator+=(const char * arr)
{
	unsigned int _size = strlen(arr);
	capacity += _size;
	char* temp = new char[capacity + 1];
	for (unsigned int i = 0; i < size; i++)
	{
		temp[i] = string[i];
	}
	temp[size] = '\0';
	delete[] string;
	string = temp;

	for (unsigned int i = size; i < capacity; i++)
	{
		string[i] = arr[i];
	}
	string[capacity] = '\0';
	size += _size;

	return this->string;
}

const char* String::getString()const
{
	return this->string;
}

void String::setCapacity(unsigned int _capacity)
{
	this->capacity = _capacity;
}

String & String::operator+(const String& arr)
{
	unsigned int arrSize = strlen(arr.getString());
	unsigned int newCapacity = size = arrSize;
	String temp;
	temp.setCapacity(newCapacity + 1);
	for (unsigned int i = 0; i < newCapacity; i++)
	{
		if (i <= size)
		{
			temp.string[i] = string[i];
		}
		if (i > size&&i <= arrSize)
		{
			int j = 0;
			temp.string[i] = arr.getString()[j];
			j++;
		}
	}
	temp.string[capacity] = '\0';
	return temp;
}

const char * String::operator+(const char * arr)
{
	unsigned int arrSize = strlen(arr);
	unsigned int newCapacity = size = arrSize;
	char* temp = new char[newCapacity + 1];
	for (unsigned int i = 0; i < newCapacity; i++)
	{
		if (i <= size)
		{
			temp[i] = string[i];
		}
		if (i > size&&i <= arrSize)
		{
			int j = 0;
			temp[i] = arr[j];
			j++;
		}
	}
	temp[capacity] = '\0';
	return temp;
}

bool String::operator==(const String & rhs)
{
	unsigned int _size = strlen(rhs.getString());
	if (size == _size)
	{
		for (unsigned int  i = 0; i < size; i++)
		{
			if (string[i] != rhs.getString()[i])
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

bool String::operator==(const char* rhs)
{
	unsigned int _size = strlen(rhs);
	if (size == _size)
	{
		for (unsigned int i = 0; i < size; i++)
		{
			if (string[i] != rhs[i])
			{
				return false;
			}
		}
		return true;
	}
	return false;
}
bool String::operator!=(const String & rhs)
{
	unsigned int _size = strlen(rhs.getString());
		if (size == _size)
		{
			for (unsigned int i = 0; i < size; i++)
			{
				if (string[i] != rhs.getString()[i])
				{
					return true;
				}
			}
			return false;
		}
		return true;
}
bool String::operator!=(const char* rhs)
{
	unsigned int _size = strlen(rhs);
	if (size == _size)
	{
		for (unsigned int i = 0; i < size; i++)
		{
			if (string[i] != rhs[i])
			{
				return true;
			}
		}
		return false;
	}
	return true;
}
bool String::operator<=(const String & rhs)
{
	unsigned int _size = strlen(rhs.getString());
	if (size <= _size)
	{
		return true;
	}
	return false;
}
bool String::operator<=(const char* rhs)
{
	unsigned int _size = strlen(rhs);
	if (size <= _size)
	{
		return true;
	}
	return false;
}
bool operator<=(const char* lhs, const String & rhs)
{
	unsigned int size = strlen(lhs);
	unsigned int _size = strlen(rhs.getString());
	if (size <= _size)
	{
		return true;
	}
	return false;
}
bool String::operator<(const String & rhs)
{
	unsigned int _size = strlen(rhs.getString());
	if (size < _size)
	{
		return true;
	}
	return false;
}
bool String::operator<(const char* rhs)
{
	unsigned int _size = strlen(rhs);
	if (size < _size)
	{
		return true;
	}
	return false;
}
bool operator<(const char* lhs, const String & rhs)
{
	unsigned int size = strlen(lhs);
	unsigned int _size = strlen(rhs.getString());
	if (size < _size)
	{
		return true;
	}
	return false;
}
bool String::operator>(const String & rhs)
{
	unsigned int _size = strlen(rhs.getString());
	if (size > _size)
	{
		return true;
	}
	return false;
}
bool String::operator>(const char* rhs)
{
	unsigned int _size = strlen(rhs);
	if (size > _size)
	{
		return true;
	}
	return false;
}
bool operator>(const char* lhs, const String & rhs)
{
	unsigned int size = strlen(lhs);
	unsigned int _size = strlen(rhs.getString());
	if (size > _size)
	{
		return true;
	}
	return false;
}
bool String::operator>=(const String & rhs)
{
	unsigned int _size = strlen(rhs.getString());
	if (size >= _size)
	{
		return true;
	}
	return false;
}
bool String::operator>=(const char* rhs)
{
	unsigned int _size = strlen(rhs);
	if (size >= _size)
	{
		return true;
	}
	return false;
}
bool operator>=(const char* lhs, const String & rhs)
{
	unsigned int size = strlen(lhs);
	unsigned int _size = strlen(rhs.getString());
	if (size >= _size)
	{
		return true;
	}
	return false;
}
bool operator!=(const char* lhs, const String & rhs)
{
	unsigned int lhSize = strlen(lhs);
	unsigned int rhSize = strlen(rhs.getString());
	if (lhSize == rhSize)
	{
		for (unsigned int i = 0; i < lhSize; i++)
		{
			if (lhs[i] != rhs.getString()[i])
			{
				return true;
			}
		}
		return false;
	}
	return true;
}
bool operator==(const char * lhs, const String & rhs)
{
	unsigned int lhsSize = strlen(lhs);
	unsigned int rhsSize = strlen(rhs.getString());
	if (lhsSize == rhsSize)
	{
		for (unsigned int i = 0; i < lhsSize; i++)
		{
			if (lhs[i] != rhs.getString()[i])
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

std::istream& operator>>(std::istream& is, const String& rhs)
{
	std::cout << "Enter string:";
	is >> rhs;
	return is;
}
std::ostream& operator<<(std::ostream& os, const String& rhs)
{
	return os << rhs;
}

unsigned int String::length() const
{
	return this->size;
}

bool String::empty() const
{
	if (size == 0)
	{
		return true;
	}
	return false;
}

const char * String::c_str() const
{
	return string;
}

const char* operator+(const char* lhs, const String& rhs)
{
	unsigned int lhsSize = strlen(lhs);
	unsigned int rhsSize = strlen(rhs.getString());
	unsigned int sumCapacity = lhsSize + rhsSize;
	char* temp = new char[sumCapacity + 1];
	for (unsigned int i = 0; i < sumCapacity; i++)
	{
		if (i <= lhsSize)
		{
			temp[i] = lhs[i];
		}
		if (i > lhsSize&&i <= rhsSize)
		{
			int j = 0;
			temp[i] = rhs.getString()[j];
			j++;
		}
	}
	temp[sumCapacity] = '\0';
	return temp;
}
