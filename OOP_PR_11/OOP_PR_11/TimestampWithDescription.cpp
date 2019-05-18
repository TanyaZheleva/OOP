#include "TimestampWithDescription.h"

TWD::TWD():Timestamp()
{
	description = new char[1];
	description[0] = '\0';
}

TWD::TWD(unsigned long int _time, const char * _description):Timestamp(_time)
{
	this->setDescription(_description);
}

TWD::TWD(const TWD & old):Timestamp(old)
{
	this->setDescription(old.getDescription());
}

TWD & TWD::operator=(const TWD & rhs)
{
	if (this != &rhs)
	{
		delete[] description;
		Timestamp::operator=(rhs);
		this->setDescription(rhs.getDescription());

	}
	return *this;
}

TWD::~TWD()
{
	delete[] description;
}

void TWD::setDescription(const char * _description)
{
	int length = strlen(_description);
	description = new char[length + 1];
	for (int i = 0; i <= length; i++)
	{
		description[i] = _description[i];
	}
}

const char * TWD::getDescription() const
{
	return description;
}

std::ostream & operator<<(std::ostream & os, const TWD & rhs)
{
	operator<<(os, (Timestamp)rhs);
	return os << "UNIX time description: " << rhs.getDescription() << "\n";
}

std::istream & operator>>(std::istream & is, TWD & rhs)
{
	operator>>(is, (Timestamp&)rhs);
	
	std::cout << "Enter description: ";	
	const int buffSz = 1000;
	char buff[buffSz];
	is.get(buff, buffSz, '\n');
	rhs= TWD(-1,buff);
	is.get();

	return is;
}
