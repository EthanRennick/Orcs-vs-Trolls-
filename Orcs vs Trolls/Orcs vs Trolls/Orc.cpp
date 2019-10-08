#include "Orc.h"
#include <iostream>

Orc::Orc()
{
	weapons = 6;
	scrolls = 2;
	food = 10;
	score = 0;
	health = 10;
	gold = 10;
}

void Orc::displayStats()
{
	std::cout << "Orc stats:\n-----\n";
	std::cout << "Orc health: " << health << std::endl;
	std::cout << "Orc food: " << food << std::endl;
	std::cout << "Orc weapons: " << weapons << std::endl;
	std::cout << "Orc scrolls: " << scrolls << std::endl;
	std::cout << "Orc score: " << score << std::endl;
	std::cout << "Orc gold: " << gold << std::endl;

}

void Orc::meleeAttack()
{

}

void Orc::magicAttack()
{
}

void Orc::move()
{
}


