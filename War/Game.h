#pragma once

#include"Army.h"
#include"ArmyFactory.h"
#include"UkrInfantryman.h"
#include"UkrArcher.h"
#include"UkrHorseman.h"
#include"RomanInfantryman.h"
#include"RomanArcher.h"
#include"RomanHorseman.h"

class Game
{
public:
	Army *createArmy(ArmyFactory &factory);
	void war();
};