#pragma once
#include "Question.h"

class MultipleChoice :public Question
{
public:
	MultipleChoice(std::string _question, std::vector<std::string> _answers, std::vector<std::string>_correctAnswers,double _points);
	void ask()override;
	double grade() override;
	Question* clone()override;
private:
	std::string question;
	std::vector<std::string> answers;
	std::vector<std::string> correctAnswers;
	std::vector<std::string> yourAnswers;
	std::string answer;
	double points;
	double totalPoints;
};

