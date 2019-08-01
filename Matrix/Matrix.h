#pragma once
#include <iostream>

class Matrix
{
public:
	Matrix();
	~Matrix();
	Matrix(const Matrix& old);
	Matrix& operator = (const Matrix& rhs);
	void operator+ (const Matrix& rhs);
	void operator- (const Matrix& rhs);
	void operator* (const float num);
	float operator* ();
	Matrix& operator!();
	friend std::istream& operator >> (std::istream& is, Matrix& matrix);
	int getMatrix()const;

private:
	int matrix[3][3];
};
	std::ostream& operator <<(std::ostream os, const Matrix& matrix);