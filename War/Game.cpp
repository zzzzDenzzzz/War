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
    UkrInfantryman ui;
    UkrArcher ua;
    UkrHorseman uh;
    int size_ukr_army = ui._size + ua._size + uh._size;

    RomanInfantryman ri;
    RomanArcher ra;
    RomanHorseman rh;
    int size_roman_army = ri._size + ra._size + rh._size;

    if (size_roman_army > size_ukr_army)
    {
        cout << "Roman army win!\n";
    }
    else
    {
        cout << "Ukrain army win!\n";
    }
}
