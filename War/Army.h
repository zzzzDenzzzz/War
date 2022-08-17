#pragma once

#include<vector>
#include"Infantryman.h"
#include"Archer.h"
#include"Horseman.h"
#include<random>

using namespace std;

class Army
{
public:
	~Army();
	int army_size;
	void info();
	vector<Infantryman *> vi;
	vector<Archer *> va;
	vector<Horseman *> vh;
};