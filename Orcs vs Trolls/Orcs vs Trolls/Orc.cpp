#include "Orc.h"

Orc::Orc()
{
	weapons = 6;
	scrolls = 2;
	food = 10;
	score = 0;
	health = 10;
	gold = 10;
	potions = 0;
	alive = true;
}

int Orc::meleeAttack()
{
	//deal 3 damage
	return 3;
}

int Orc::magicAttack()
{
	//deal 2 damage
	return 2;
}

void Orc::move()
{
}

void Orc::defend()
{
	//take no damage
}

int Orc::quaffPotion()
{
	//drink potion
	return 5;
}


