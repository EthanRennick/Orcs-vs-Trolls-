#pragma once

class Enemy
{
public:
	Enemy();
	virtual void meleeAttack() = 0;
	virtual void magicAttack() = 0;
	virtual void move() = 0;
	virtual void defend() = 0;
	virtual void quaffPotion() = 0;

	void displayStats();

	//virtual functions can be overwritten by sub classes
	int food;
	int weapons;
	int scrolls;
	int health;
	int potions;
};
