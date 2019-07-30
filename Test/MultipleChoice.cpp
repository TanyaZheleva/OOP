#include "MultipleChoice.h"


MultipleChoice::MultipleChoice(std::string _question, std::vector<std::string> _answers, std::vector<std::string>_correctAnswers, double _points)
	:totalPoints(0), question(_question), answers(_answers), correctAnswers(_correctAnswers), points(_points)
{}

void MultipleChoice::ask()
{
	std::cout << question << "\n";
	unsigned int length = answers.size();
	for (unsigned int i = 0; i < length; i++)
	{
		std::cout << answers[i] << "\n";
	}
	for (unsigned int i = 0; i < correctAnswers.size(); i++)
	{
		std::cin >> answer;
		std::cout << "\n";

		int size = yourAnswers.size();

		for (int j = 0; j < size; j++)
		{
			if (compare(answer, yourAnswers[j]) == true)
			{
				break;
			}
		}
		yourAnswers.push_back(answer);
	}
}

double MultipleChoice::grade()
{
	unsigned int length = correctAnswers.size();
	for (unsigned int i = 0; i < length; i++)
	{
		for (unsigned int j = 0; j < length; j++)
		{
			if (compare(yourAnswers[i], correctAnswers[j]) == 1)
			{
				totalPoints += points;
			}
			else
			{
				totalPoints -= points;
			}
		}
	}
	return totalPoints;
}

Question * MultipleChoice::clone()
{
	return new MultipleChoice(*this);
}
