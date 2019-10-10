#include "Character.h"

Character::Character()
{
	//default all items to 0
	food = 0;
	score = 0;
	weapons = 0;
	scrolls = 0;
	health = 0;
	potions = 0;
	gold = 0;
	alive = true;
}

//display the stats to the player
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
}

//display the actions available to the player in combat
void Character::displayActions()
{
	std::cout << "Player Actions:\n-----\n";
	std::cout << "1. Attack with weapon. You have " << weapons << " weapons." << std::endl;
	std::cout << "2. Use a scroll. You have " << scrolls << " scrolls." << std::endl;
	std::cout << "3. Use a potion. You have: " << potions << " potions." << std::endl;
	std::cout << "4. Concede.\n";
	std::cout << "-----\n";
	std::cout << "To choose an action, you must input its index in this list.\n";
	std::cout << "*** *** *** *** *** *** ***\n";

}
void Character::displayEquipment()
{
	std::cout << "Player Stats:\n-----\n";
	std::cout << "Food: " << food << std::endl;
	std::cout << "Weapons: " << weapons << std::endl;
	std::cout << "Scrolls: " << scrolls << std::endl;
	std::cout << "Potions: " << potions << std::endl;
	std::cout << "Health: " << health << std::endl;
	std::cout << "-----\n";
};
