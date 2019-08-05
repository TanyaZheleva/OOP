#include "DNSRecord.h"


DNSRecord::DNSRecord()
{
	const int defaultSize = 100;
	this->domainName = new char[defaultSize];
	domainName[0] = '\0';
	this->ipAddress = new char[defaultSize];
	ipAddress[0] = '\0';
}

DNSRecord::DNSRecord(const char* _domainName, const char* _ipAddress)
{
	int domainNameSize = strlen(_domainName);
	int ipAddressSize = strlen(_ipAddress);
	this->domainName = new char[domainNameSize+1];
	this->ipAddress = new char[ipAddressSize+1];

	for (int i = 0; i < domainNameSize; i++)
	{
		domainName[i] = _domainName[i];
	}
	domainName[domainNameSize] = '\0';
	for (int i = 0; i < ipAddressSize; i++)
	{
		ipAddress[i] = _ipAddress[i];
	}
	ipAddress[ipAddressSize] = '\0';
}

DNSRecord::~DNSRecord()
{
	delete[] this->domainName;
	delete[] this->ipAddress;
}

DNSRecord::DNSRecord(const DNSRecord& old)
{
	int domainNameSize = strlen(old.domainName);
	domainName = new char[domainNameSize+1];
	for (int i = 0; i <= domainNameSize; i++)
	{
		domainName[i] = old.domainName[i];
	}
	

	int ipAddressSize = strlen(old.ipAddress);
	ipAddress = new char[ipAddressSize+1];
	for (int i = 0; i <= ipAddressSize; i++)
	{
		ipAddress[i] = old.ipAddress[i];
	}
}

DNSRecord& DNSRecord:: operator= (const DNSRecord& rhs)
{
	if (this != &rhs)
	{
		delete[] domainName;

		int domainNameSize = strlen(rhs.domainName);
		domainName = new char[domainNameSize+1];
		for (int i = 0; i < domainNameSize; i++)
		{
			domainName[i] = rhs.domainName[i];
		}
		domainName[domainNameSize] = '\0';

		delete[] ipAddress;
		int ipAddressSize = strlen(rhs.ipAddress);
		ipAddress = new char[ipAddressSize+1];
		for (int i = 0; i < ipAddressSize; i++)
		{
			ipAddress[i] = rhs.ipAddress[i];
		}
		ipAddress[ipAddressSize] = '\0';
	}
	return*this;
}

const char* DNSRecord::getDomainName()const
{
	return this->domainName;
}

const char* DNSRecord::getIPAddress()const
{
	return this->ipAddress;
}

std::ostream & operator<<(std::ostream & os, const DNSRecord & records)
{
	return os << records.domainName << " " << records.ipAddress << "\n";
	
}

std::istream& operator>>(std::istream& is, const DNSRecord& rhs)
{
	//rhs.domainName[10];
	is.getline(rhs.domainName, 99);
	rhs.domainName[99] = '\0';

	//rhs.ipAddress[10];
	is.getline(rhs.ipAddress, 99);
	rhs.ipAddress[99] = '\0';

	return is;
}