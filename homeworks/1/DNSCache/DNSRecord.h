#pragma once
#include <iostream>

class DNSRecord
{
public:
	DNSRecord();
	DNSRecord(const char* _domainName,const char* _ipAddress);
	~DNSRecord();
	DNSRecord(const DNSRecord& old);
	DNSRecord& operator=(const DNSRecord& rhs);
	const char* getDomainName()const;
	const char* getIPAddress()const;
	friend std::ostream& operator<<(std::ostream& os, const DNSRecord& records);
	friend std::istream& operator>>(std::istream& is, const DNSRecord& rhs);
private:
	char *domainName;
	char *ipAddress;
};


