#include "Question.h"

Question * Question::clone()
{
	return nullptr;
}

bool Question::compare(std::string lhs, std::string rhs)
{
	int lSize = lhs.size();
	int rSize = rhs.size();
	if (lSize == rSize)
	{
		for (int i = 0; i < rSize; i++)
		{
			if (lhs[i] != rhs[i])
			{
				return false;
			}
		}
		return true;
	}
	return false;
}
