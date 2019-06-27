#include "Test.h"

void Test::addQuestion(Question * _add)
{
	testQuestions.push_back(_add->clone());
}

void Test::doTest()
{
	int length = testQuestions.size();
	for (int i = 0; i < length; i++)
	{
		testQuestions[i]->ask();
		//testAnswers.push_back(testQuestions[i]->getAnswer());
	}
}

double Test::gradeTest()
{
	int length = testQuestions.size();
	for (int i = 0; i < length; i++)
	{
		testPoints+=testQuestions[i]->grade();
	}
	return testPoints;
}
