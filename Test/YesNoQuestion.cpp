#include "YesNoQuestion.h"



YesNoQuestion::YesNoQuestion(std::string _question, std::string _answer, double _points)
	:question(_question), correctAnswer(_answer), points(_points)
{}
void YesNoQuestion::ask()
{
	std::cout << question << "\n";
	std::cin >> yourAnswer;
}

double YesNoQuestion::grade()
{
	if (compare(yourAnswer, correctAnswer) == 1)
	{
		return points;
	}
	else
	{
		return 0;
	}
}

Question * YesNoQuestion::clone()
{
	return new YesNoQuestion(*this);
}
