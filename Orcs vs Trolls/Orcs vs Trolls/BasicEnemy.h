#pragma once
#include "Enemy.h"
class Basic : public Enemy
{
public:
	Basic();

	int meleeAttack();
	int magicAttack();
	void reset();

	void move();
	void defend();
	int quaffPotion();

};