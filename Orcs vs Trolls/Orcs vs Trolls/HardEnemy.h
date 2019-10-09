#pragma once
#include "Enemy.h"

class Hard : public Enemy
{
public:
	Hard();

	void meleeAttack();
	void magicAttack();
	
	 void move();
	 void defend();
	 void quaffPotion();
};