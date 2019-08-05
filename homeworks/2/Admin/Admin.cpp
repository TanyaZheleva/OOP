#include "Admin.h"

type Admin::get()
{
	return a;
}

Admin::Admin(const char * _username, const char * _password,
	const char * _title, const char * _IPAddress,
	int _reputation) :User(_username, _password,
		_title, _IPAddress),PowerUser(_username, _password,
			_title, _IPAddress,_reputation),VIP(_username, _password,
				_title, _IPAddress)
{
}

std::ostream & operator<<(std::ostream & os, const Admin & rhs)
{
	return os << "Username: " << rhs.username << "\nEncrypted Password: "
		<< rhs.password << "\nTitle: " << rhs.title << "\nIPAddress: " << rhs.IPAddress << "\nReputation"<<rhs.reputation<<'\n';
}
