#pragma once
#include "Enemy.h"

class Hard : public Enemy
{
public:
	Hard();

	int meleeAttack();
	int magicAttack();
	void reset();
	
	void move();
	void defend();
	int quaffPotion();
};