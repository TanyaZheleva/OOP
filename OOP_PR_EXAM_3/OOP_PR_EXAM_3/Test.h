#pragma once
#include "Question.h"

class Test
{
public:
	Test() :testPoints(0) {};
	void addQuestion(Question* _add);
	void doTest();
	double gradeTest();
private:
	std::vector<Question*>testQuestions;
	std::vector<std::string>testAnswers;
	double testPoints;
};

