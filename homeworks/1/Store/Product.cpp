#include "Product.h"

Product::Product() :defSize(10)
{
	this->brand = new char[defSize];
	this->model = new char[defSize];
}

Product::Product(const int _SKU, const char* _brand, const char* _model,
	const float _price, const int _count) : SKU(_SKU), price(_price), count(_count)
{
	int brSize = strlen(_brand);
	brand = new char[brSize + 1];
	for (int i = 0; i < brSize; i++)
	{
		this->brand[i] = _brand[i];
	}
	brand[brSize] = '\0';

	int mSize = strlen(_model);
	model = new char[mSize + 1];
	for (int i = 0; i < mSize; i++)
	{
		this->model[i] = _model[i];
	}
	model[mSize] = '\0';
}

Product::~Product()
{
	delete[] this->brand;
	delete[] this->model;
}

Product::Product(const Product& old) : SKU(old.SKU), price(old.price),
count(old.count)
{
	int brandLength = strlen(old.brand);
	brand = new char[brandLength + 1];
	for (int i = 0; i < brandLength; i++)
	{
		this->brand[i] = old.brand[i];
	}
	brand[brandLength] = '\0';

	int modelLength = strlen(old.model);
	model = new char[modelLength + 1];
	for (int i = 0; i < modelLength; i++)
	{
		this->model[i] = old.model[i];
	}
	model[modelLength] = '\0';
}

Product& Product::operator=(const Product& rhs)
{
	if (this != &rhs)
	{

		this->SKU = rhs.SKU;
		this->price = rhs.price;
		this->count = rhs.count;

		delete[] brand;
		int brandSize = strlen(brand);
		brand = new char[brandSize + 1];
		for (int i = 0; i <= brandSize; i++)
		{
			this->brand[i] = rhs.brand[i];
		}

		delete[] model;
		int modelSize = strlen(model);
		model = new char[modelSize + 1];
		for (int i = 0; i <= modelSize; i++)
		{
			this->model[i] = rhs.model[i];
		}
	}
	return *this;
}

std::ostream& operator <<(std::ostream& os, const  Product& _product)
{
	return os << _product.SKU << " " << _product.brand << " " << _product.model << "  " << _product.price << " " << _product.count << "\n";
}

std::istream& operator >>(std::istream& is, Product& _product)
{
	std::cout << "Enter SKU: " << "\n";
	is >> _product.SKU;
	std::cout << "Enter brand: " << "\n";
	is >> _product.brand;
	std::cout << "Enter model: " << "\n";
	is >> _product.model;
	std::cout << "Enter price: " << "\n";
	is >> _product.price;
	std::cout << "Enter count: " << "\n";
	is >> _product.count;

	return is;
}

void Product::changeSKU(const unsigned int _SKU)
{
	this->SKU = _SKU;
}

void Product::changePrice(const float _price)
{
	if (_price < 0)
	{
		std::cout << "Error!" << "\n";
	}

	this->price = _price;
}
void Product::changeCount(const unsigned int _count)
{
	this->count = _count;
}

void Product::changeBrand(const char* _brand)
{
	int length = strlen(brand);
	int _length = strlen(_brand);

	char* temp = new char[_length + 1];
	if (length < _length)
	{
		for (int i = 0; i < length; i++)
		{
			temp[i] = brand[i];
		}
		temp[length] = '\0';
		delete[] brand;
		brand = temp;
		length = _length;
	}

	for (int i = 0; i < length; i++)
	{
		this->brand[i] = _brand[i];
	}
	brand[length] = '\0';
}

void Product::changeModel(const char* _model)
{
	int length = strlen(model);
	int _length = strlen(_model);
	char* temp = new char[_length + 1];
	if (length != _length)
	{
		for (int i = 0; i < length; i++)
		{
			temp[i] = model[i];
		}
		temp[length] = '\0';
		delete[] model;
		model = temp;
		length = _length;
	}
	for (int i = 0; i < length; i++)
	{
		this->model[i] = _model[i];
	}
	model[length] = '\0';
}

const unsigned int Product::getSKU()const
{
	return this->SKU;
}

const float Product::getPrice()const
{
	return this->price;
}

const unsigned int Product::getCount()const
{
	return this->count;
}

const char* Product::getModel()const
{
	return this->model;
}

const char* Product::getBrand()const
{
	return this->brand;
}