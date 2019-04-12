#pragma once
class Subject
{
public:
	Subject();
	~Subject();
	const char* getSubject();
	void setSubject(const char* _subject);
	void subjectResize();
private:
	char* subject;
	int capacity;
	int expancion;
	int currentCapacity;
};

