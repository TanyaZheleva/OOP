#include "VIP.h"

type VIP::get()
{
	return v;
}

VIP::VIP()
{
}

VIP::VIP(const char * _username, const char * _password,
	const char * _title, const char * _IPAddress):User(_username, _password,
		_title, _IPAddress)
{
}
