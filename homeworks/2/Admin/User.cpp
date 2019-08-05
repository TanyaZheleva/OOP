#include "User.h"

bool compare(const char* lhs, const char* rhs);

User::User() :Guest()
{
	username = new char[1];
	username[0] = '\0';
	password = new char[1];
	password[0] = '\0';
	title = new char[1];
	title[0] = '\0';

}

User::User(const char * _username, const char * _password, const char * _title, const char * _IPAddress)
{
	int lengthU = strlen(_username);
	username = new char[lengthU + 1];
	for (int i = 0; i <= lengthU; i++)
	{
		username[i] = _username[i];
	}

	password = Crypt(_password);

	int lengthT = strlen(_title);
	title = new char[lengthT + 1];
	for (int i = 0; i <= lengthT; i++)
	{
		title[i] = _title[i];
	}

	int lengthI = strlen(_IPAddress);
	IPAddress = new char[lengthI + 1];
	for (int i = 0; i <= lengthI; i++)
	{
		IPAddress[i] = _IPAddress[i];
	}
	
}

User::~User()
{
	delete[] username;
	delete[] password;
	delete[] title;
}

User::User(const User & old) :Guest(old)
{
	int lengthU = strlen(old.username);
	username = new char[lengthU + 1];
	for (int i = 0; i <= lengthU; i++)
	{
		username[i] = old.username[i];
	}

	int lengthP = strlen(old.password);
	password = new char[lengthP + 1];
	for (int i = 0; i <= lengthP; i++)
	{
		password[i] = old.password[i];
	}
	
	int lengthT = strlen(old.title);
	title = new char[lengthT + 1];
	for (int i = 0; i <= lengthT; i++)
	{
		title[i] = old.title[i];
	}
}

User & User::operator=(const User & rhs)
{
	if (this != &rhs)
	{
		delete[] username;
		int lengthU = strlen(rhs.username);
		username = new char[lengthU + 1];
		for (int i = 0; i <= lengthU; i++)
		{
			username[i] = rhs.username[i];
		}

		delete[] password;
		int lengthP = strlen(rhs.password);
		password = new char[lengthP + 1];
		for (int i = 0; i <= lengthP; i++)
		{
			password[i] = rhs.password[i];
		}

		delete[] title;
		int lengthT = strlen(rhs.title);
		title = new char[lengthT + 1];
		for (int i = 0; i <= lengthT; i++)
		{
			title[i] = rhs.title[i];
		}
	}
	return *this;
}

void User::changePassword(const char * _old, const char * _new)
{
	char* _crypted = Crypt(_old);
	if (compare(password, _crypted))
	{
		delete[] password;
		password = Crypt(_new);
	}
	else
	{
		std::cout << "Wrong Password!\n";
	}
	delete[] _crypted;
}

void User::setTitle(const char * _title)
{
	if (get() == 2||get()==3)
	{
		int length = strlen(_title);
		delete[] title;
		title = new char[length + 1];
		for (int i = 0; i <= length; i++)
		{
			title[i] = _title[i];
		}
	}
	else
	{
		std::cout << "Not VIP or Admin!\n";
	}
}

void User::setUsername(const char * _username)
{
	if (get() == 3)
	{
		delete[] username;
		int length = strlen(_username);
		username = new char[length + 1];
		for (int i = 0; i <= length; i++)
		{
			username[i] = _username[i];
		}
	}
	else
	{
		std::cout << "Not Admin!\n";
	}
}


void User::changeUsername(User & _user, const char * _username)
{
	if (get() == 3)
	{
		int length = strlen(_user.username);
		delete[] _user.username;
		_user.username = new char[length + 1];
		for (int i = 0; i <= length; i++)
		{
			_user.username[i] = _username[i];
		}
	}
	else
	{
		std::cout << "Not Admin!\n";
	}
}

type User::get()
{
	return u;
}

char* User::Crypt(const char* _password)
{
	int length = strlen(_password);
	char* temp = new char[length+1];
	for (int i = 0; i < length; i++)
	{
		temp[i] = ~_password[i];
	}
	temp[length] = '\0';
	return temp;
}



bool compare(const char* lhs, const char* rhs)
{
	int lhSize = strlen(lhs);
	int rhSize = strlen(rhs);
	if (lhSize == rhSize)
	{
		for (int i = 0; i < lhSize; i++)
		{
			if (lhs[i] != rhs[i])
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

const char* User::getTitle()const
{
	return title;
}

const char * User::getUsername() const
{
	return username;
}

std::ostream & operator<<(std::ostream & os, const User & rhs)
{
	return os << "Username: " << rhs.username << "\nEncrypted Password: "
		<< rhs.password << "\nTitle: " << rhs.title << "\nIPAddress: " << rhs.IPAddress<<'\n';
}
