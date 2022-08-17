#pragma once

#include "ArmyFactory.h"
#include"RomanInfantryman.h"
#include"RomanArcher.h"
#include"RomanHorseman.h"

class RomanArmyFactory : public ArmyFactory
{
public:
	Infantryman *createInfantryman();
	Archer *createArcher();
	Horseman *createHorseman();
};