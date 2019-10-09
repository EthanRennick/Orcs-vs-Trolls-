#pragma once
#include "Character.h"
#include "Orc.h"
#include "Troll.h"
#include "Enemy.h"
#include "BasicEnemy.h"
#include "HardEnemy.h"
#include "MediumEnemy.h"

struct Points
{
	//orc data
	

	//troll data
	
};

void intro();
void howToPlay();
void orcSide();
void trollSide();
bool side = 0;
void shopping();
Troll troll;
Orc orc;
Basic basicEnemy;
Medium mediumEnemy;
Hard hardEnemy;
Character* player;
Enemy* enemy;
void arenaEntrance();




