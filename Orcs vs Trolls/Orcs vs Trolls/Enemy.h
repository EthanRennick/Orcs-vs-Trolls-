#pragma once
#include <iostream>

class Enemy
{
public:
	Enemy();
	virtual int meleeAttack() = 0;
	virtual int magicAttack() = 0;
	virtual int quaffPotion() = 0;
	virtual void reset() = 0;

	void displayStats();

	//virtual functions can be overwritten by sub classes
	int food;
	int weapons;
	int scrolls;
	int health;
	int potions;
};
