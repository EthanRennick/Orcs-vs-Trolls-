#pragma once

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
	virtual void meleeAttack() =0;
	virtual void magicAttack()=0;
	virtual void move()=0;
	//virtual functions can be overwritten by sub classes

	int food;
	int weapons;
	int scrolls;
	int score;
	int health;
	int gold;
};
