/// <summary>
/// Ethan Rennick
/// C00240102
/// started: 2.10.19
/// time taken:
/// 
/// ---
/// this is a phil project
/// i must show i understand
/// Pointers, polymorphism, Inheritance and 
/// 
/// ---
/// known bugs?
/// 
/// </summary>
#include <iostream>
#include "Game.h"

//main
int main(void)
{
	//teach the rules
	howToPlay();
	system("pause");

	intro(); //introduction to game
	
	if (side == 0) //if player is an orc, he's an orc
	{
		player = &orc; //
		player->displayStats();
		std::cout << "Welcome to the Orc clan, kinsman.\n";
		std::cout << "*** *** *** *** *** *** ***\n";
	}
	else //if he's not an orc, he must be a troll
	{
		player = &troll;
		player->displayStats();		
		std::cout << "Welcome to our tribe, Troll friend.\n";
		std::cout << "*** *** *** *** *** *** ***\n";
	}

	system("Pause");
	std::cout << "*** *** *** *** *** *** ***\n";
	shopping(); //shopping function
	system("pause");
	std::cout << "*** *** *** *** *** *** ***\n";

	std::cout << "You make your way to the arena...\n";
	std::cout << "The orcs and trolls have been fighting in this worthless pit for years.\n";
	std::cout << "If an orc or troll should beat all of his enemies, however, he would be given freedom.\n";
	std::cout << "GO! Earn your freedom!\n";
	std::cout << "*** *** *** *** *** *** ***\n";

	arenaEntrance();

}

//the introduction the the game
//also for picking sides
void intro()
{
	/// <summary>
	/// the introduction to the game
	/// pics a side for people.
	/// </summary>
	std::cout << "Welcome to Purassic Jark, the arena we've been fighting in for generations. \nYou could be the champion. Good luck!\n";
	std::cout << "Please pick a side.\n Orcs = 0, Trolls = 1\n";
	int sidePicker = 0;
	std::cin >> sidePicker;
	if (sidePicker != 0 && sidePicker != 1) //invalid input
	{
		std::cout << "Complication with input. Try again.\n";
		std::cout << "*** *** *** *** *** *** ***\n";
		intro();
	}
	else if (sidePicker == 0) //chose the orc
	{
		std::cout << "*** *** *** *** *** *** ***\n";
		std::cout << "You have chosen the Orc side!\n";
		side = sidePicker;
	}
	else if (sidePicker == 1) //chose the troll
	{
		std::cout << "*** *** *** *** *** *** ***\n";
		std::cout << "You have chosen the Troll side!\n";	
		side = sidePicker;
	}
}

//lessons on how to play the game
void howToPlay()
{
	std::cout << "Greetings player. Let me learn you some rules.\n";
	std::cout << "Firstly, we will choose a race to play as.\nOnce this is done, you will be shown your stats.\n";
	std::cout << "It is up to you to lead your character out of the battle which ensues.\n";
	std::cout << "You may melee attack, use magic attack or defend against incoming attacks to\nallow your health to recharge.\n";
	std::cout << "The amount of turns you have will be limited by your food.\n";
	std::cout << "Food, weapons and scrolls will be available for purchase after each battle.\n";
	std::cout << "Goodluck, champion.\n";
	std::cout << "*** *** *** *** *** *** ***\n";

}

//the player shop
void shopping()
{
	//controls
	int query = 0;
	int item = 0;
	int again = 0;

	//prices
	int food = 1;
	int weapons = 2;
	int scrolls = 2;
	int potion = 3;

	//intro to shop
	std::cout << "'Welcome to my shop!' a small halfling calls. 'What can I get you?\n";
	std::cout << "*** *** *** *** *** *** ***\n";
	std::cout << "The halfling points to his price board. It reads: \n";
	std::cout << "1. Food = 1 gold\n";
	std::cout << "2. Health Potion = 3 gold\n";
	std::cout << "3. Scrolls = 2 gold\n";
	std::cout << "4. Weapons = 2 gold\n";
	std::cout << " *** *** *** *** *** *** ***\n";
	player->displayStats();
	std::cout << " *** *** *** *** *** *** ***\n";
	std::cout << "If you would like to purchase an item, please press 1.\nIf you would like to leave, press 0.\n";
	std::cin >> query;

	//item select
	if (query == 1)
	{
		//purchase item
		std::cout << "Please enter the index of the item you would like to buy.\nExample: Weapons are index 4.\n";
		std::cin >> item;

		switch (item)
		{
		case 1: //food item
			item = 1;
			{
				if (player->gold >= food)
				{
					player->food++;
					player->gold--;
					std::cout << "You bought some delicious food!\n";
					std::cout << " *** *** *** *** *** *** ***\n";
					player->displayStats();
					break;
				}
				else
				{
					std::cout << "'Forgive me, sir', the halfling stutters, 'But you haven't enough gold for that.'\n";
					std::cout << " *** *** *** *** *** *** ***\n";
					break;
				}
			}
		case 2: //potion
			item = 2;
			{
				if (player->gold >= potion)
				{
					player->potions++;
					player->gold -= 3;
					std::cout << "You bought a strange health potion!\n";
					std::cout << " *** *** *** *** *** *** ***\n";
					player->displayStats();
					break;
				}
				else
				{
					std::cout << "'Forgive me, sir', the halfling stutters, 'But you haven't enough gold for that.'\n";
					std::cout << " *** *** *** *** *** *** ***\n";
					break;
				}
			}
		case 3: //scrolls
			item = 3;
			{
				if (player->gold >= scrolls)
				{
					player->scrolls++;
					player->gold -= 2;
					std::cout << "You bought a mystical scroll!\n";
					std::cout << " *** *** *** *** *** *** ***\n";
					player->displayStats();
					break;
				}
				else
				{
					std::cout << "'Forgive me, sir', the halfling stutters, 'But you haven't enough gold for that.'\n";
					std::cout << " *** *** *** *** *** *** ***\n";
					break;
				}
			}
		case 4: //weapons
			item = 4;
			{
				if (player->gold >= weapons)
				{
					player->weapons++;
					player->gold -= 2;
					std::cout << "'Careful, those swords are sharp!', the halfling shouts.\n";
					std::cout << " *** *** *** *** *** *** ***\n";
					player->displayStats();
					break;
				}
				else
				{
					std::cout << "'Forgive me, sir', the halfling stutters, 'But you haven't enough gold for that.'\n";
					std::cout << " *** *** *** *** *** *** ***\n";
					break;

				}
			}
		}

		//item bought

		std::cout << "*** *** *** *** *** *** ***\n";
		std::cout << "'Right then', the small man speaks again, 'Anything else?'\n";
		std::cout << "Press 1 to stay in the shop. Press 0 to leave the shop.\n";
		std::cin >> again;

		//option to purchase again or leave
		if (again == 1)
		{
			shopping();
		}
		else
		{
			std::cout << "You leave, briskly, with your items.\n";
			std::cout << "*** *** *** *** *** *** ***\n";
		}
	}
	else if(query == 0) //if you leave, end function
	{
		//leave
	}
	else //error control with player input
	{
		//error
		std::cout << "*** *** *** *** *** *** ***\n";
		std::cout << "You entered an invalid value. Try again.\n";
		system("pause");
		std::cout << "*** *** *** *** *** *** ***\n";

		shopping(); //go shopping again
	}
}

//the entrance to the arena
//will give you an enemy based on your score
void arenaEntrance()
{
	//difficulty picker
	std::cout << "Surrounded by other orcs and trolls, you enter the arena.\n";
	std::cout << "Human guards direct you into your designated places.\n";
	std::cout << "*** *** *** *** *** *** ***\n";

	if (player->score == 0 || player->score == 1) //easy
	{
		std::cout << "The guard eyes you up and down.\n";
		std::cout << "You are directed to the area reserved for weaklings.\n";
		std::cout << "*** *** *** *** *** *** ***\n";
		enemy = &basicEnemy;
		std::cout << "A wimpy looking troll stands opposite you.\n";
		std::cout << "'Looks like we'll be fighting today' he says, grinning.\n";
		std::cout << "*** *** *** *** *** *** ***\n";
		player->displayStats();
		std::cout << "*** *** *** *** *** *** ***\n";
		enemy->displayStats();

	}
	else if (player->score >= 2 && player->score < 4) //medium
	{
		std::cout << "The guard eyes you up and down.\n";
		std::cout << "You are directed to the area reserved for Medium strength fighters.\n";
		std::cout << "*** *** *** *** *** *** ***\n";
		enemy = &mediumEnemy;
		std::cout << "A fairly strong looking orc stands opposite you.\n";
		std::cout << "'Looks like we'll be fighting today' he says, grimacing.\n";
		std::cout << "*** *** *** *** *** *** ***\n";
		player->displayStats();
		std::cout << "*** *** *** *** *** *** ***\n";
		enemy->displayStats();

	}
	else if (player->score >= 4 && player->score < 6)//hard
	{
		std::cout << "The guard eyes you up and down.\n";
		std::cout << "You are directed to the area reserved for possible champions.\n";
		std::cout << "*** *** *** *** *** *** ***\n";
		enemy = &hardEnemy;
		std::cout << "An extremly dangerous looking beast stands opposite you.\n";
		std::cout << "'I am going to chew you up, champion!' he yells, angrily.\n";
		std::cout << "*** *** *** *** *** *** ***\n";
		player->displayStats();
		std::cout << "*** *** *** *** *** *** ***\n";
		enemy->displayStats();

	}
};


//std::cout << "Lets go virtual" << std::endl;
	//Character character;
	//character.flip(); 
	//character.walk();

	//std::cout << "Lets go create an Orc" << std::endl;
	//orc.walk();
//	orc.fly();
	//orc.flip();

	//std::cout << "Lets go create an Troll" << std::endl;
	//troll.walk();
	//troll.fly();
//	troll.flip();

	//std::cin.get(); //???

//npc->flip();
	//npc->fly();
	//npc->walk();

//npc->flip();
	//npc->fly();
//	npc->walk();
