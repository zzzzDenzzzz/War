#include "Game.h"

Army *Game::createArmy(ArmyFactory &factory)
{
    Army *p = new Army;
    p->vi.push_back(factory.createInfantryman());
    p->va.push_back(factory.createArcher());
    p->vh.push_back(factory.createHorseman());
    return p;
}

void Game::war()
{
    Army ua_army;
    Army r_army;

    UkrInfantryman ui;
    UkrArcher ua;
    UkrHorseman uh;
    ua_army.setSizeArmy(rand());

    RomanInfantryman ri;
    RomanArcher ra;
    RomanHorseman rh;
    r_army.setSizeArmy(rand());

    if (r_army.getSizeArmy() > ua_army.getSizeArmy())
    {
        cout << "Roman army win!\n";
    }
    else
    {
        cout << "Ukrain army win!\n";
    }
}
