#pragma once
#include <iostream>

class String
{
public:
	String(const char* _string);
	String();
	~String();
	String(const String& old);
	String& operator= (const String& rhs);
	const char* operator =(const char* arr);
	const char operator[] (int num);
	const char* getString()const;
	void setCapacity(unsigned int _capacity);
	String& operator+=(const String& rhs);
	const char* operator+=(const char* arr);
	String& operator+(const String& rhs);
	const char* operator+ (const char* arr);
	bool operator== (const String& rhs);
	bool operator== (const char* arr);
	bool operator!=(const String& rhs);
	bool operator!=(const char* arr);
	bool operator<=(const String& rhs);
	bool operator<=(const char* arr);
	bool operator<(const String& arr);
	bool operator<(const char* arr);
	bool operator>(const String& arr);
	bool operator>(const char* arr);
	bool operator>=(const String& rhs);
	bool operator>=(const char* arr);
	friend std::istream& operator>>(std::istream& is, const String& rhs);
	friend std::ostream& operator<<(std::ostream& os, const String& rhs);
	unsigned int length()const;
	bool empty()const;
	const char* c_str()const;
private:
	char *string;
	unsigned int capacity;
	unsigned int size;
};
