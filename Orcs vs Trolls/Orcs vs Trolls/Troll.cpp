#include "Troll.h"

Troll::Troll()
{
	weapons = 3;
	scrolls = 6;
	food = 10;
	score = 0;
	health = 11;
}

void Troll::meleeAttack()
{
}

void Troll::magicAttack()
{
}

void Troll::move()
{
}

void Troll::displayStats()
{
	std::cout << "Troll stats:\n-----\n";
	std::cout << "Troll health: " << health << std::endl;
	std::cout << "Troll food: " << food << std::endl;
	std::cout << "Troll weapons: " << weapons << std::endl;
	std::cout << "Troll scrolls: " << scrolls << std::endl;
	std::cout << "Troll score: " << score << std::endl;
}
