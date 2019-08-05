#include "PowerUser.h"

PowerUser::PowerUser()
{
}

PowerUser::PowerUser(const char * _username, const char * _password,
	const char * _title, const char * _IPAddress,
	int _reputation): User(_username, _password,
		_title, _IPAddress),reputation(_reputation)
{
}

void PowerUser::addReputation(const PowerUser & _other)
{
	if (this != &_other)
	{
		reputation++;
	}
}

type PowerUser::get()
{
	return pu;
}
