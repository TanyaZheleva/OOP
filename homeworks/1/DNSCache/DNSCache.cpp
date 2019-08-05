#include "DNSCache.h"

bool compare(const char* lhs, const char* rhs)
{
	int rLength = strlen(rhs);
	int lLength = strlen(lhs);
	if (rLength == lLength)
	{
		for (int i = 0; i < rLength; i++)
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

DNSCache::DNSCache() :capacity(5), size(0), resizeBy(10)
{
	this->records = new DNSRecord[capacity];
}

DNSCache::~DNSCache()
{
	delete[] this->records;
}

DNSCache::DNSCache(const DNSCache& old) : size(old.size),
capacity(old.capacity), resizeBy(old.resizeBy)
{
	records = new DNSRecord[old.capacity];
	for (int i = 0; i < old.size; i++)
	{
		records[i] = old.records[i];
	}
}

DNSCache& DNSCache:: operator= (const DNSCache& rhs)
{
	if (this != &rhs)
	{
		size = rhs.size;
		capacity = rhs.capacity;
		resizeBy = rhs.resizeBy;
		delete[] records;
		records = new DNSRecord[rhs.capacity];
		for (int i = 0; i < rhs.size; i++)
		{
			records[i] = rhs.records[i];
		}
	}
	return *this;
}

void DNSCache::resize()
{
	DNSRecord* temp = new DNSRecord[capacity + resizeBy];
	for (int i = 0; i < capacity; i++)
	{
		temp[i] = records[i];
	}
	delete[] records;
	records = temp;
	capacity += resizeBy;
}

void DNSCache::add(const DNSRecord& _record)
{
	if (size == capacity)
	{
		resize();
	}


	records[size] = _record;
	size++;
}


const char* DNSCache::lookup(const char* domainName)const
{
	int DNSize = strlen(domainName);
	const char* currentDomainName;
	//int currentDNSize;
	for (int i = 0; i < size; i++)
	{
		currentDomainName = records[i].getDomainName();
		int currentDNSize = strlen(currentDomainName);
		if (currentDNSize == DNSize)
		{
			if (compare(currentDomainName, domainName)==false)
			{
				break;
			}
			return records[i].getIPAddress();
		}
	}
	return "\nerror";
}

void DNSCache::flush()
{
	delete[] records;
	size = 0;
	capacity = 5;
	records = new DNSRecord[capacity];
}

void DNSCache::print() const
{
	if (size == 0)
	{
		std::cout << "Error! Empty cache!" << "\n";
	}

	else
	{
		for (int i = 0; i < size; i++)
		{
			std::cout << records[i];
		}
	}
}