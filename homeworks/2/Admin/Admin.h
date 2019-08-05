#pragma once
#include "VIP.h"
#include "PowerUser.h"

class Admin :virtual public User, public PowerUser, public VIP
{
	type get() override;
public:
	Admin(const char* _username, const char* _password,
		const char* _title, const char* _IPAddress, int _reputation);
	friend std::ostream& operator<<(std::ostream& os, const Admin& rhs);
};
