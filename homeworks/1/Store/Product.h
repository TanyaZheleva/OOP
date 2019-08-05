#pragma once
#include <iostream>

class Product//T-shirts
{
public:
	Product();
	Product(const int _SKU, const char* _brand,const char* _model, 
		const float _price,const int _count);
	~Product();
	Product(const Product& old);
	Product& operator=(const Product& rhs);
	
	friend std::ostream& operator <<( std::ostream& os, const Product& _product);
	friend std::istream& operator >>( std::istream& is, Product& _product);
	
	void changeSKU(const unsigned int _SKU);
	void changePrice(const float _price);
	void changeCount(const unsigned int _count);
	void changeBrand(const char* _brand);
	void changeModel(const char* _model);
	
	const unsigned int getSKU()const;
	const float getPrice()const;
	const unsigned int getCount()const;
	const char* getBrand()const;
	const char* getModel()const;

private:
	unsigned int SKU;//stock keeping unit
	char* brand;//brand of t-shirt
	char* model;//model of t-shirt
	float price;//price of t-shirt
	unsigned int count;//amount of t-shirts in stock
	int defSize;

};

