#pragma once
#include "Enemy.h"

class Medium : public Enemy
{
public:
	Medium();

	void meleeAttack();
	void magicAttack();

	void move();
	void defend();
	void quaffPotion();
};