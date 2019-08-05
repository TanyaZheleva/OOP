#pragma once

class Passanger
{
public:
	Passanger();
	Passanger(const char* name, const int age,const bool regular);
	~Passanger();
	Passanger(const Passanger& old);
	Passanger& operator=(const Passanger& rhs);
	
	const char* GetName()const;
	int GetAge()const;
	bool GetRegular()const;
	
	void SetName(const char* _new);
	void SetAge(const int _new);
	void SetRegular(const bool _new);
	
	void printRegular()const;


private:
	char* name;
	int age;
	bool regular;
	int size;
};
