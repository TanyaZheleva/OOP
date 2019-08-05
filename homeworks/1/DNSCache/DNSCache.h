#pragma once
#include"DNSRecord.h"

class DNSCache
{
public:
	DNSCache();
	~DNSCache();
	DNSCache(const DNSCache& old);
	DNSCache& operator= (const DNSCache& rhs);
	void resize();
	void add(const DNSRecord& _record);
	const char* lookup(const char* domainName)const;
	void flush();
	void print()const;

private:
	DNSRecord *records;
	int size;
	int capacity;
	int resizeBy;
};


