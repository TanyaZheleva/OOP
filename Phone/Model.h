#pragma once

const int modelCapacity = 20;

class Model
{
public:
	Model();
	~Model();
	const char* getModel();
	 void setModel(const char* _model);
private:
	char model[modelCapacity];

};

