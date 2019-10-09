#pragma once
#include "Character.h"
#include <iostream>

//the troll object is also character object
class Troll : public Character {
public:
	void fly() { std::cout << "Average Dooper is flapping and flying" << std::endl; }
	//this guy has implemented fly

	Troll();
	int meleeAttack();
	int magicAttack();
	void move();
	void defend();
	int quaffPotion();
	//void displayStats();


private:


};
