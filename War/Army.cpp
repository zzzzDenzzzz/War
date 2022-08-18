#include "Army.h"

Army::~Army()
{
	for (int i = 0; i < vi.size(); i++)
	{
		delete vi[i];
	}
	for (int i = 0; i < va.size(); i++)
	{
		delete va[i];
	}
	for (int i = 0; i < vh.size(); i++)
	{
		delete vh[i];
	}
}

void Army::info()
{
	for (int i = 0; i < vi.size(); i++)
	{
		vi[i]->info();
	}
	for (int i = 0; i < va.size(); i++)
	{
		va[i]->info();
	}
	for (int i = 0; i < vh.size(); i++)
	{
		vh[i]->info();
	}
}

void Army::setSizeArmy(int size_army)
{
	this->size_army = size_army;
}

int Army::getSizeArmy()
{
	return size_army;
}
