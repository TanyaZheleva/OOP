#include "OpenQuestion.h"

OpenQuestion::OpenQuestion(std::string _question, double _points)
	:question(_question),points(_points),gradeOfAnswer(0)
{}

void OpenQuestion::ask()
{
	std::cout << question << "\n";
	std::cin >> answer;
	std::cout << "entered\n";
}

double OpenQuestion::grade()
{
	std::cout << question << "\n";
	std::cout << answer << "\n";
	std::cin >> gradeOfAnswer;
	points = gradeOfAnswer * 100;
	if (answer.size() == 0)
	{
		return 0;
	}
	return points;
}

Question * OpenQuestion::clone()
{
	return new OpenQuestion(*this);
}


