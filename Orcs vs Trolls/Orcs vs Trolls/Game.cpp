#include <iostream>
#include "Game.h"
#include "Character.h"
#include "Orc.h"
#include "Troll.h"


//using namespace std;

void intro();
void orcSide();
void trollSide();
bool side = 0;



int main(void)
{
	Troll troll;
	Orc orc;


	intro();
	
	//std::cout << "Let go virtual" << std::endl;
	//Character character;
	//character.flip(); 
	//character.walk();

	//std::cout << "Let go create an Orc" << std::endl;
	//orc.walk();
//	orc.fly();
	//orc.flip();

	//std::cout << "Let go create an Troll" << std::endl;
	//troll.walk();
	//troll.fly();
//	troll.flip();

	Character* npc = &orc;
	//npc->flip();
	//npc->fly();
	//npc->walk();

	npc = &troll;
	//npc->flip();
	//npc->fly();
//	npc->walk();

	if (side == 0)
	{
		orc.displayStats();

	}
	else
	{
		troll.displayStats();

	}
	std::cin.get();
	


}


void intro()
{
	std::cout << "Welcome to Purassic Jark, the battlefield of this war we've been fighting for generations. \nYou are our trollen champion. Good luck!\n";
	std::cout << "Please pick a side.\n Orcs = 0, Trolls = 1\n";
	int sidePicker = 0;
	std::cin >> sidePicker;
	if (sidePicker != 0 && sidePicker != 1)
	{
		std::cout << "Complication with input. Try again.\n";
		intro();
	}
	else if (sidePicker == 0)
	{
		std::cout << "You have chosen the Orc side!\n";
		side = sidePicker;
		side = 0;
		//orcSide();
	}
	else if (sidePicker == 1)
	{
		std::cout << "You have chosen the Troll side!\n";
		side = sidePicker;
		side = 1;
		//trollSide();
	}
};