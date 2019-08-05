#pragma once
#include "User.h"

class VIP: virtual public User
{
	type get() override;
public:
	VIP();
	VIP(const char* _username, const char* _password,
		const char* _title, const char* _IPAddress);
};
