#pragma once
#include "Question.h"
class YesNoQuestion :public Question
{
public:
	YesNoQuestion(std::string _question, std::string _correctAnswer, double _points);
	void ask()override;
	double grade() override;
	Question* clone()override;
private:
	std::string question;
	std::string correctAnswer;
	std::string yourAnswer;
	double points;
};

