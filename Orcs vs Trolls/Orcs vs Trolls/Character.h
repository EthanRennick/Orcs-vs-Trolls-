#pragma once
#include <iostream>
//phil's piece:

//class Character { //abstract class with no implementation for fly
//public:
//	void flip() { std::cout << "I know how to flip and I will flipping do it" << std::endl; }
//	virtual void walk() { std::cout << "just in case they are too young to walk yet" << std::endl; }
//	virtual void fly() = 0; //pure virtual function - cant create characters cos its an abstract class only create objects that are(nt) characters that implement fly = inheritance
	//no implementation for method fly ?
//};


class Character
{
public:
	Character();
	virtual int meleeAttack() =0;
	virtual int magicAttack()=0;
	virtual void move()=0;
	virtual void defend() = 0;
	virtual int quaffPotion() = 0;

	void displayStats();
	void displayActions();
	void displayEquipment();

	//virtual functions can be overwritten by sub classes

	int food;
	int weapons;
	int scrolls;
	int score;
	int health;
	int gold;
	int potions;
};
