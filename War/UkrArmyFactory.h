#pragma once

#include "ArmyFactory.h"
#include"UkrInfantryman.h"
#include"UkrArcher.h"
#include"UkrHorseman.h"

class UkrArmyFactory : public ArmyFactory
{
public:
	Infantryman *createInfantryman();
	Archer *createArcher();
	Horseman *createHorseman();
};