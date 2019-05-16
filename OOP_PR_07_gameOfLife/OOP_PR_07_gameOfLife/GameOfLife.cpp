#include "GameOfLife.h"


GameOfLife::GameOfLife()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			matrix[i][j] = true;
		}
	}
}

GameOfLife::~GameOfLife()
{
}

void GameOfLife::advance()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			int alive = 0;
			if (matrix[i][j] == true)
			{
				if (matrix[i - 1][j] == true)
					alive++;
				if (matrix[i][j - 1] == true)
					alive++;
				if (matrix[i + 1][j] == true)
					alive++;
				if (matrix[i][j + 1] == true)
					alive++;
			}
			if (alive < 2 || alive>3)
			{
				matrix[i][j] = false;
			}
			if (alive == 2 || alive == 3)
			{
				matrix[i][j] = true;
			}
			if (matrix[i][j] == false)
			{
				if (matrix[i - 1][j] == true)
					alive++;
				if (matrix[i][j - 1] == true)
					alive++;
				if (matrix[i + 1][j] == true)
					alive++;
				if (matrix[i][j + 1] == true)
					alive++;
			}
			if (alive == 3)
			{
				matrix[i][j] = true;
			}
			else
			{
				matrix[i][j] = false;
			}
		}
	}
}
void GameOfLife::getCell(bool cell) const
{
	if (cell == true)
	{
		std::cout << "ALIVE" << "\n";
	}
	std::cout << "DEAD" << "\n";
}

std::ostream & operator<<(std::ostream & os, const GameOfLife & _matrix)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (_matrix.matrix[i][j] == true)
			{
				os << i << j << "\n";
			}
		}
	}
	return os;
}
