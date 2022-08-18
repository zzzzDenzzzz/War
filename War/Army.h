#pragma once

#include<vector>
#include"Infantryman.h"
#include"Archer.h"
#include"Horseman.h"
#include<random>

using namespace std;

class Army
{
	int size_army;
public:
	~Army();
	void info();
	vector<Infantryman *> vi;
	vector<Archer *> va;
	vector<Horseman *> vh;
	void setSizeArmy(int size_army);
	int getSizeArmy();
};