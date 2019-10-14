#pragma once
#include "Character.h"
#include "Orc.h"
#include "Troll.h"
#include "Enemy.h"
#include "BasicEnemy.h"
#include "HardEnemy.h"
#include "MediumEnemy.h"
#include <time.h>

int concedes;
void intro();
void howToPlay();
bool side = 0;
void shopping();
void arenaEntrance();
void fight();
void enemyFight();
bool victory = false;
void die();
Troll troll;
Orc orc;
Basic basicEnemy;
Medium mediumEnemy;
Hard hardEnemy;
Character* player;
Enemy* enemy;




