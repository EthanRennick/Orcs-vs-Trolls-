#include "MediumEnemy.h"

Medium::Medium()
{
	weapons = 5;
	scrolls = 5;
	food = 10;
	health = 10;
	potions = 0;
}

int Medium::meleeAttack()
{
	return 4;
}

int Medium::magicAttack()
{
	return 4;
}

void Medium::reset()
{
	weapons = 5;
	scrolls = 5;
	food = 10;
	health = 10;
	potions = 0;
}

void Medium::move()
{
}

void Medium::defend()
{
}

int Medium::quaffPotion()
{
	return 6;
}
