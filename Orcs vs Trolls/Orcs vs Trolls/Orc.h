#pragma once
#include "Character.h"
#include <iostream>

/// <summary>
/// so an orc char can barrelroll and walk but a troll character can just fly
/// </summary>
class Orc : public Character {

public:
	//void barrelRoll() { std::cout << "rooooooolllllllllllinggggggg" << std::endl; }
	//void walk() { std::cout << "Doopers have a really cool walk!" << std::endl; }
	//void fly() { std::cout << "Dooper is flapping and flying" << std::endl; }
	//this guy has an implementation for fly

	Orc();
	int meleeAttack();
	int magicAttack();
	void move();
	void defend();
	int quaffPotion();

private:
	
};