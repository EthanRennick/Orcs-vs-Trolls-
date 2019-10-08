#include <iostream>
#include "Game.h"
#include "Character.h"
#include "Orc.h"
#include "Troll.h"


//using namespace std;

void intro();
void howToPlay();
void orcSide();
void trollSide();
bool side = 0;
void shopping();



int main(void)
{
	Troll troll;
	Orc orc;

	//teach the rules
	howToPlay();
	system("pause");

	intro();
	
	Character* npc = &orc;
	
	npc = &troll;
	
	if (side == 0)
	{
		orc.displayStats();
		std::cout << "Welcome to the Orc clan, kinsman.\n";
	}
	else
	{
		troll.displayStats();
		std::cout << "Welcome to our tribe, Troll friend.\n";
	}
	system("pause");
}


void intro()
{
	/// <summary>
	/// the introduction to the game
	/// pics a side for people.
	/// </summary>
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
	}
	else if (sidePicker == 1)
	{
		std::cout << "You have chosen the Troll side!\n";
		side = sidePicker;
	}
}


void howToPlay()
{
	std::cout << "Greetings player. Let me learn you some rules.\n";
	std::cout << "Firstly, we will choose a race to play as.\nOnce this is done, you will be shown your stats.\n";
	std::cout << "It is up to you to lead your character out of the battle which ensues.\n";
	std::cout << "You may melee attack, use magic attack or defend against incoming attacks to\nallow your health to recharge.\n";
	std::cout << "The amount of turns you have will be limited by your food.\n";
	std::cout << "Food, weapons and scrolls will be available for purchase after each battle.\n";
	std::cout << "Goodluck, champion.\n";
}

void shopping()
{
	std::cout << " 'Welcome to the shop!' a small halfling calls. 'What can I get you?";
	
};

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

	//std::cin.get();

//npc->flip();
	//npc->fly();
	//npc->walk();

//npc->flip();
	//npc->fly();
//	npc->walk();
