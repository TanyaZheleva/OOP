#include "Test.h"
#include"YesNoQuestion.h"
#include "MultipleChoice.h"
#include "OpenQuestion.h"

int main()
{
	YesNoQuestion one("Is the Earth flat?", "No", 2.01);
	MultipleChoice two("How much is 2+6?", { "A: 2","B: 8","C: 7" }, { "B: 8" }, 1);
	OpenQuestion three("What is the best colour?", 6.5);
	Test test1;
	test1.addQuestion((Question*)&one);
	test1.addQuestion((Question*)&two);
	test1.addQuestion((Question*)&three);
	test1.doTest();
	test1.gradeTest();
	return 0;
}