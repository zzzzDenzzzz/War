#pragma once

#include"Infantryman.h"
#include"Archer.h"
#include"Horseman.h"

class ArmyFactory
{
public:
	virtual Infantryman *createInfantryman() = 0;
	virtual Archer *createArcher() = 0;
	virtual Horseman *createHorseman() = 0;
};