#include "Model.h"
#include <iostream>

Model::Model()
{
}

Model::~Model()
{
}

int strLen(const char* x)
{
	int count = 0;
	while (x[count]!=0)
	{
		count++;
	}
	return count;
}

int min(int a, int b)
{
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

const char* Model::getModel()
{
	return this->model;
}

void Model::setModel(const char* _model)
{
	int size = strLen(_model);
	int capacity = modelCapacity - 1;
	int newLen = min(size, capacity) - 1;
	for (size_t i = 0; i < newLen; i++)
	{
		this->model[i] = _model[i];
	}
	this->model[newLen] = 0;
}
