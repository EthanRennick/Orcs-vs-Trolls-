#pragma once
#include "Enemy.h"

class Medium : public Enemy
{
public:
	Medium();

	int meleeAttack();
	int magicAttack();
	void reset();

	void move();
	void defend();
	int quaffPotion();
};