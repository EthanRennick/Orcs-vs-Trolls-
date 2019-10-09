#pragma once
#include "Enemy.h"
class Basic : public Enemy
{
public:
	Basic();

	void meleeAttack();
	void magicAttack();

	 void move();
	 void defend();
	 void quaffPotion();

};