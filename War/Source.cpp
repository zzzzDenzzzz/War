#include"Game.h"
#include"RomanArmyFactory.h"
#include"UkrArmyFactory.h"
#include<time.h>

int main()
{
	srand(unsigned(time(NULL)));

	Game game;
	RomanArmyFactory ra_factory;
	UkrArmyFactory ua_factory;

	Army *ra = game.createArmy(ra_factory);
	Army *ua = game.createArmy(ua_factory);

	cout << "Roman army: " << endl;
	ra->info();
	cout << "\nUkrain army: " << endl;
	ua->info();

	cout << endl;

	game.war();

	return 0;
}