#include "Store.h"
#include "Product.h"

Store::Store():capacity(5),amount(0)
{
	this->products = new Product[capacity];
}

Store::~Store()
{
	delete[] this->products;
}

void Store::Resize()
{
	Product* temp = new Product[capacity*2];
	for (unsigned int i = 0; i < capacity; i++)
	{
		temp[i] = products[i];
	}
	delete[] this->products;
	products = temp;
	capacity *= 2;
}

Store::Store(const Store& old):amount(old.amount),
capacity(old.capacity)
{
	products = new Product [capacity];

	for (unsigned int i = 0; i < amount; i++)
	{
		this->products[i] = old.products[i];
	}
}

Store& Store:: operator=(const Store& rhs)
{
	if (this != &rhs)
	{
		this->amount = rhs.amount;
		this->capacity = rhs.capacity;
		delete[] products;
		products = new Product[capacity];
		for (unsigned int i = 0; i < amount; i++)
		{
			this->products[i] = rhs.products[i];
		}
	}
	return *this;
}

void Store::setAmount(const unsigned int _amount)
{
	this->amount = _amount;
}

const unsigned int Store::getAmount()const
{
	return this->amount;
}

void Store::Add(const Product& newItem)
{
	if (amount >= capacity)
	{
		Resize();
	}
	this->products[amount] = newItem;
	amount++;
}

bool compare(const char* lhs, const char* rhs)
{
	int lengthLhs = strlen(lhs);
	int lengthRhs = strlen(rhs);
	if (lengthLhs == lengthRhs)
	{
		for (int i = 0; i < lengthLhs; i++)
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

void Store::deleteItem( Product _product)
{
	for (unsigned int i = 0; i<amount; i++)
	{
		if (products[i].getSKU() ==_product.getSKU())
		{
			products[i--] = products[--amount];
		}
	}
}

void swapItems(Product& oldProduct, Product& newProduct)
{
oldProduct.changeSKU(newProduct.getSKU());
oldProduct.changeBrand(newProduct.getBrand());
oldProduct.changeModel(newProduct.getModel());
oldProduct.changePrice(newProduct.getPrice());
oldProduct.changeCount(newProduct.getCount());
}

void Store::changeItem(const unsigned int _SKU, Product& newProduct)
{
	for (unsigned int i = 0; i < amount; i++)
	{
		if (products[i].getSKU() == _SKU)
		{
	      swapItems(products[i], newProduct);
		}
	}
}

void Store::print()const
{
	for (unsigned int i = 0; i < amount; i++)
	{
		std::cout << products[i];
	}
}

bool operator !=(Product lhs,Product rhs)
{
	if (lhs.getSKU() != rhs.getSKU())
	{
		return false;
	}
	return true;
}

void printMenu()
{
	std::cout << "to add a new product enter A" << "\n"
		<< "to delete a product enter X" << "\n"
		<< "to change a product enter C" << "\n"
		<< "to print all product enter D" << "\n"
		<< "to exit enter Q" << "\n";
}