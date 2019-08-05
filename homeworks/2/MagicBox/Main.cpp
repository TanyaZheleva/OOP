#include "MagicBox.h"

int main()
{
	MagicBox<int> t;
	for (int i = 0; i < 20; i++)
	{
		t.insert(i);
	}
	t.pop();
	t.list();

	return 0;
}