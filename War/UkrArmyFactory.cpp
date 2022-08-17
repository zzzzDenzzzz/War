#include "UkrArmyFactory.h"

Infantryman *UkrArmyFactory::createInfantryman()
{
	return new UkrInfantryman;
}

Archer *UkrArmyFactory::createArcher()
{
	return new UkrArcher;
}

Horseman *UkrArmyFactory::createHorseman()
{
	return new UkrHorseman;
}
