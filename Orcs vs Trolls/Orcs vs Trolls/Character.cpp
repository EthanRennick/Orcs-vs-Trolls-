#include "Character.h"

Character::Character()
{
	food = 0;
	score = 0;
	weapons = 0;
	scrolls = 0;
	health = 0;
	potions = 0;
}
void Character::displayStats()
{
	std::cout << "Player stats:\n-----\n";
	std::cout << "Food: " << food << std::endl;
	std::cout << "Weapons: " << weapons << std::endl;
	std::cout << "Scrolls: " << scrolls << std::endl;
	std::cout << "Potions: " << potions << std::endl;
	std::cout << "Health: " << health << std::endl;
	std::cout << "Score: " << score << std::endl;
	std::cout << "Gold: " << gold << std::endl;
	std::cout << "-----\n";
};
