#include "RomanArmyFactory.h"

Infantryman *RomanArmyFactory::createInfantryman()
{
    return new RomanInfantryman;
}

Archer *RomanArmyFactory::createArcher()
{
    return new RomanArcher;
}

Horseman *RomanArmyFactory::createHorseman()
{
    return new RomanHorseman;
}
