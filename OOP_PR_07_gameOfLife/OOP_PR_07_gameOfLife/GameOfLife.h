#pragma once
#include <iostream>

class GameOfLife
{
public:
	GameOfLife();
	~GameOfLife();

	void advance();
	void getCell(bool cell)const;
	friend std::ostream& operator<<(std::ostream& os, const GameOfLife& _matrix);
private:
	bool matrix[3][3];
};
