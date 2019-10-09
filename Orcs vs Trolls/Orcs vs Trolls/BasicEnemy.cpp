#include "BasicEnemy.h"

Basic::Basic()
{
	weapons = 3;
	scrolls = 3;
	food = 5;
	health = 4;
	potions = 0;
}

int Basic::meleeAttack()
{
	//deal two damage
	return 2;
}

int Basic::magicAttack()
{
	//deal two damage
	return 2;
}

void Basic::reset()
{
	weapons = 3;
	scrolls = 3;
	food = 5;
	health = 4;
	potions = 0;
}

void Basic::move()
{
}

void Basic::defend()
{
	//take no damage
}

int Basic::quaffPotion()
{
	//drink potion
	return 5;
}
