#include "Enemy.h"
#include <iostream>
Enemy::Enemy()
{
	int food =0;
	int weapons=0;
	int scrolls=0;
	int health=0;
	int potions=0;
}

void Enemy::displayStats()
{
	std::cout << "Enemy stats:\n-----\n";
	std::cout << "Food: " << food << std::endl;
	std::cout << "Weapons: " << weapons << std::endl;
	std::cout << "Scrolls: " << scrolls << std::endl;
	std::cout << "Potions: " << potions << std::endl;
	std::cout << "Health: " << health << std::endl;
	std::cout << "-----\n";
};

