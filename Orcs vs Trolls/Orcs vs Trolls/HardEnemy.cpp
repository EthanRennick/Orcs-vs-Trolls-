#include "HardEnemy.h"

Hard::Hard()
{
	weapons = 9;
	scrolls = 9;
	food = 16;
	health = 16;
	potions = 1;
}

int Hard::meleeAttack()
{
	return 6;
}

int Hard::magicAttack()
{
	return 6;
}

void Hard::reset()
{
	weapons = 9;
	scrolls = 9;
	food = 16;
	health = 16;
	potions = 1;
}

void Hard::move()
{
}

void Hard::defend()
{
}

int Hard::quaffPotion()
{
	return 6;
}
