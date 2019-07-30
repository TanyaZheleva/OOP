#include "Subject.h"


int Length(const char* word)
{
	int count = 0;
	while (word[count] != 0)
	{
		count++;
	}
	return count;
}

void Subject::subjectResize()
{
	char* temp = new char[capacity + expancion];
	for (int i = 0; i < capacity; i++)
	{
		temp[i] = subject[i];
	}
	delete[] subject;
	subject = temp;
}

Subject::Subject()
{
   capacity = 0;
   expancion = 10;
   currentCapacity = 10;
   this->subject = new char[capacity];

}

Subject::~Subject()
{
	delete[] this->subject;
}

void Subject::setSubject(const char* _subject)
{
	if (currentCapacity == 0)
	{
		subjectResize();
	}
	int size = Length(_subject);
	for (int i = 0; i < size; i++)
	{
		subject[i] = _subject[i];
	}
	subject[size] = 0;
	currentCapacity = size;

}

const char* Subject::getSubject()
{
	if (currentCapacity == 0)
	{
		return "Error!";
		
	}
	return this->subject;
}