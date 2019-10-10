#include "Troll.h"

Troll::Troll()
{
	weapons = 3;
	scrolls = 6;
	food = 10;
	score = 0;
	health = 11;
	gold = 10;
	potions = 0;
	alive = true;
}

int Troll::meleeAttack()
{
	//deal 2 damage
	return 2;
}

int Troll::magicAttack()
{
	//deal 3 damage
	return 3;
}

void Troll::move()
{

}

void Troll::defend()
{
	//take no damages
}

int Troll::quaffPotion()
{
	//drink a potion of health
	return 5;
}

