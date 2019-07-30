#pragma once
#include "Question.h"
class OpenQuestion :public Question
{
public:
	OpenQuestion(std::string _question, double _points);
	void ask()override;
	double grade() override;
	Question* clone()override;
private:
	std::string question;
	std::string answer;
	double points;
	double gradeOfAnswer;//in percentages//=points/100
};

