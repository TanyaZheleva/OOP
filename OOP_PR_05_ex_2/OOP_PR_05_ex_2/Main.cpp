#include "Matrix.h"

Matrix::Matrix()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			matrix[i][j] = 0;
		}
	}
}

Matrix::~Matrix()
{
}

Matrix::Matrix(const Matrix& old)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			matrix[i][j] = old.matrix[i][j];
		}
	}
}

Matrix& Matrix:: operator = (const Matrix& rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				matrix[i][j] = rhs.matrix[i][j];
			}
		}
	}
	return *this;
}

void Matrix:: operator+ (const Matrix& rhs)
{

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			matrix[i][j] += rhs.matrix[i][j];
		}
	}
}

void Matrix::operator- (const Matrix& rhs)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			matrix[i][j] -= rhs.matrix[i][j];
		}
	}
}

void Matrix::operator*(const float num)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			matrix[i][j] *= num;
		}
	}
}

float Matrix::operator*()
{
	float Det = matrix[1][1] * matrix[2][2] *
		matrix[3][3] + matrix[1][3] * matrix[2][1]
		* matrix[3][2] + matrix[1][2] * matrix[2][3]
		* matrix[3][1] - matrix[1][3] * matrix[2][2]
		* matrix[3][1] - matrix[1][2] * matrix[2][1]
		* matrix[3][3] - matrix[1][1] * matrix[2][3]
		* matrix[3][2];
	return Det;
}

std::ostream& operator << (std::ostream& os, Matrix& matrix)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			return os<<(*matrix).getMatrix();
		}
	}
}

int  Matrix::getMatrix()const
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			return this->matrix[i][j];
		}
	}
}