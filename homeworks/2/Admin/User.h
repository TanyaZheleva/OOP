#pragma once
#include "Guest.h"
enum type{u,pu,v,a};

class User : public Guest
{
	char* Crypt(const char* _password);
	virtual type get();
public:
	User();
	User(const char* _username,const char* _password,
		const char* _title,const char* _IPAddress);
	virtual ~User();
	User(const User& old);
	User& operator= (const User& rhs);
	void changePassword(const char* _old, const char* _new);
	void setTitle(const char* _title);
	void setUsername(const char* _username);
	void changeUsername(User& _user, const char* _username);
	const char* getTitle()const;
	const char* getUsername()const;
	friend std::ostream& operator<<(std::ostream& os, const User& rhs);
protected:
	char* username;
	char* password;
	char* title;
};
