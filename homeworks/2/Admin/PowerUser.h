#pragma once
#include "User.h"

class PowerUser:virtual public User
{
	type get() override;
public:
	PowerUser();
	PowerUser(const char* _username, const char* _password,
		const char* _title, const char* _IPAddress, int _reputation);
	void addReputation(const PowerUser& _other);
protected:
	int reputation;
};