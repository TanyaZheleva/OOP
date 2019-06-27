#include"Product.h"
#include "Sum.h"
#include "Const.h"
#include "Var.h"


int main()
{
	Const a=5.4;
	Var x("veriable", 2.0);
	Const b(6);
	
	Expression* pa = &a;
	Expression* pb = &b;
	Expression* px = &x;
	
	Sum sum(pa, px);
	
	Expression* pSum = new Sum(sum);
	
	Product product(pb, pSum);
	
	product.print();
	
	return 0;
}