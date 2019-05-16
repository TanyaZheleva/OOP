#include "House.h"

int main()
{

	/*House f("address", "owner", 2, 4, 8);
	Building b("baddress", 1, 1);*/
	/*//!!!f =(House)b;
	House *pf=&f;
	Building *pb = pf;
	Building *ppb = &b;
	//!!!pf = (House*)ppb;
	//!!!pf = (House*)pb;*/

	/*//dynamic_cast
	House* ph;
	Building* pb;
	pb = dynamic_cast<Building*> (&f);
	//???ph = dynamic_cast<House*> (&b);*/

	/*//static_cast
	House*ph;
	Building* pb = static_cast<Building*> (ph);*/
	
	//class CBase { };
	//class CDerived : public CBase { };
	//CBase b;
	//CBase* pb;
	//CDerived d;
	//CDerived* pd;
	//pb = dynamic_cast<CBase *>(&d);
	//// ok: derive d to base
	//pd = dynamic_cast<CDerived*>(&b);
	//// allowed but it returns NULL

	/*class CBase { };
	class CDerived : public CBase { };
	CBase * a = new CBase;
	CDerived * b = static_cast<CDerived*>(a);*/
	
	return 0;
}