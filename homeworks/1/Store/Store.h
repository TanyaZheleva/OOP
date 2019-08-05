#pragma once
#include"Product.h"
#include "Product.h"

class Store
{
public:
	Store();
	~Store();
	Store(const Store& old);
	Store& operator=(const Store& rhs);

	void Resize();

	void setAmount(const unsigned int _amount);

	const unsigned int getAmount()const;

	void Add(const Product& newItem);
	void deleteItem(Product _product);
	void changeItem(const unsigned int _SKU, Product& newProduct);
	void print()const;

private:
	Product* products;
	unsigned int amount;
	unsigned int capacity;
};

