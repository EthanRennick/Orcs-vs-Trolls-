/// <summary>
/// Ethan Rennick
/// C00240102
/// started: 2.10.19
/// time taken:
/// about 12 hours
/// ---
/// this is a phil project
/// i must show i understand
/// ***
/// Pointers, 
/// polymorphism, 
/// Inheritance 
/// and encapsulation
/// ***
/// I think i've done that
/// Inheritance is child classes taking things from the parent classes.
///		so all my characters can melee attack so orcs and trolls can do it
/// pointers are literal pointers to things
///		eg in this game i use pointers to enemies
/// Polymorphism is the morphing of one thing into another
///		I dont use it much here cos i just made an enemy class
/// encapsulation is having data which is public, protected or private
///		most of my data is public because I was taught to program that way 
///		I also find it easier
/// ---
/// known bugs?
/// 
/// </summary>
#include <iostream>
#include "Game.h"

//main
int main(void)
{
	std::cout << R"(
        .-"""".
       /       \
   __ /   .-.  .\
  /  `\  /   \/  \
  |  _ \/   .==.==.
  | (   \  /____\__\
   \ \      (_()(_()
    \ \            '---._
     \                   \_
  /\ |`       (__)________/
 /  \|     /\___/
|    \     \||VV
|     \     \|"""",
|      \     ______)
\       \  /`
/        \())";
	std::cout << "\nHello there, I am the dungeon master.\n";
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
	system("Pause");

	arenaEntrance(); //enter the arena and choose an enemy

	while (player->score < 6)
	{
		shopping();
		arenaEntrance();
	}

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
	std::cout << "You enter the supplies shop.\n";
	std::cout << "'Welcome to my shop!', a small halfling calls, from behind the counter.\n'What can I get you?\n";
	std::cout << "*** *** *** *** *** *** ***\n";
	std::cout << "The halfling points to his price board. It reads: \n";
	std::cout << "1. Food = 1 gold\n";
	std::cout << "2. Health Potion = 3 gold\n";
	std::cout << "3. Scrolls = 2 gold\n";
	std::cout << "4. Weapons = 2 gold\n";
	std::cout << "*** *** *** *** *** *** ***\n";
	player->displayStats();
	std::cout << "*** *** *** *** *** *** ***\n";
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
					std::cout << "*** *** *** *** *** *** ***\n";
					player->displayStats();
					break;
				}
				else
				{
					std::cout << "'Forgive me, sir', the halfling stutters, 'But you haven't enough gold for that.'\n";
					std::cout << "*** *** *** *** *** *** ***\n";
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
					std::cout << "*** *** *** *** *** *** ***\n";
					player->displayStats();
					break;
				}
				else
				{
					std::cout << "'Forgive me, sir', the halfling stutters, 'But you haven't enough gold for that.'\n";
					std::cout << "*** *** *** *** *** *** ***\n";
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
					std::cout << "*** *** *** *** *** *** ***\n";
					player->displayStats();
					break;
				}
				else
				{
					std::cout << "'Forgive me, sir', the halfling stutters, 'But you haven't enough gold for that.'\n";
					std::cout << "*** *** *** *** *** *** ***\n";
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
					std::cout << "*** *** *** *** *** *** ***\n";
					player->displayStats();
					break;
				}
				else
				{
					std::cout << "'Forgive me, sir', the halfling stutters, 'But you haven't enough gold for that.'\n";
					std::cout << "*** *** *** *** *** *** ***\n";
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
	system("Pause");

	if (player->score == 0 || player->score == 1) //easy
	{
		std::cout << "The guard eyes you up and down.\n";
		std::cout << "You are directed to the area reserved for weaklings.\n";
		std::cout << "*** *** *** *** *** *** ***\n";
		system("Pause");
		enemy = &basicEnemy;
		std::cout << "A wimpy looking troll stands opposite you.\n";
		std::cout << "'Looks like we'll be fighting today' he says, grinning.\n";
		system("Pause");
		std::cout << "*** *** *** *** *** *** ***\n";
		std::cout << "You enter the arena.\n";
		std::cout << "Your opponent squares up to you.\n";
		std::cout << "You must choose an action.\n";
		std::cout << "*** *** *** *** *** *** ***\n";
		fight();
	}
	else if (player->score >= 2 && player->score < 4) //medium
	{
		std::cout << "The guard eyes you up and down.\n";
		std::cout << "You are directed to the area reserved for Medium strength fighters.\n";
		std::cout << "*** *** *** *** *** *** ***\n";
		enemy = &mediumEnemy;
		std::cout << "A fairly strong looking orc stands opposite you.\n";
		std::cout << "'Looks like we'll be fighting today' he says, grimacing.\n";
		system("Pause");
		std::cout << "*** *** *** *** *** *** ***\n";
		std::cout << "You enter the arena.\n";
		std::cout << "Your opponent squares up to you.\n";
		std::cout << "You must choose an action.\n";
		std::cout << "*** *** *** *** *** *** ***\n";
		fight();

	}
	else if (player->score >= 4 && player->score < 6)//hard
	{
		std::cout << "The guard eyes you up and down.\n";
		std::cout << "You are directed to the area reserved for possible champions.\n";
		std::cout << "*** *** *** *** *** *** ***\n";
		enemy = &hardEnemy;
		std::cout << "An extremly dangerous looking beast stands opposite you.\n";
		std::cout << "'I am going to chew you up, champion!' he yells, angrily.\n";
		system("Pause");
		std::cout << "*** *** *** *** *** *** ***\n";
		std::cout << "You enter the arena.\n";
		std::cout << "Your opponent squares up to you.\n";
		std::cout << "You must choose an action.\n";
		std::cout << "*** *** *** *** *** *** ***\n";
		fight();
	}
}

//fight function
void fight()
{
	bool playerDead = false;
	bool enemyDead = false;
	while (enemyDead == false)
	{
		if (playerDead == false)
		{
			player->displayEquipment();
			std::cout << "*** *** *** *** *** *** ***\n";
			enemy->displayStats();
			std::cout << "*** *** *** *** *** *** ***\n";
			int action = 0;
			system("pause");
			player->displayActions();
			std::cin >> action;

			//decides to execute an action
			//if you dont have the food to continue fighting
			//you will die
			switch (action)
			{
				if (player->food == 0)
				{
					std::cout << "You are out of food and can no longer fight.\n";
					action = 4;
					//concede battle
				}
			case 1:
				action = 1;
				{
					if (player->weapons >= 1)
					{
						//melee attack
						int damage = 0;
						damage = player->meleeAttack();
						enemy->health -= damage;
						player->weapons--;
						player->food--;
						//status
						std::cout << "*** *** *** *** *** *** ***\n";
						std::cout << "You dealt " << damage << " damage to your opponent.\n";
						std::cout << "*** *** *** *** *** *** ***\n";

						system("pause");

					}
					else if (player->weapons == 0)
					{
						//invalid action
						std::cout << "Before you realise, you swing your fist at your opponent.\nToo late you notice; you are out of weapons.\n";
						std::cout << "*** *** *** *** *** *** ***\n";
					}
					break;
				}
			case 2:
				action = 2;
				{
					if (player->scrolls >= 1)
					{
						//magic attack
						int damage = 0;
						damage = player->magicAttack();
						enemy->health -= damage;
						player->scrolls--;
						player->food--;
						//status
						std::cout << "*** *** *** *** *** *** ***\n";
						std::cout << "You dealt " << damage << " damage to your opponent.\n";
						std::cout << "*** *** *** *** *** *** ***\n";

						system("pause");

					}
					else if (player->scrolls == 0)
					{
						//invalid action
						std::cout << "Before you realise, you reach into your pocket for a scroll.\nToo late you notice; you are out of scrolls.\n";
						std::cout << "*** *** *** *** *** *** ***\n";
					}
					break;
				}
			case 3:
				action = 3;
				{
					if (player->potions >= 1)
					{
						//potion quaff
						int restore = 0;
						restore = player->quaffPotion();
						player->health += restore;
						player->food--;
						player->potions--;

						//status
						std::cout << "*** *** *** *** *** *** ***\n";
						std::cout << "You restore " << restore << " health.\n You feel replenished.\n";
						std::cout << "*** *** *** *** *** *** ***\n";

						system("pause");
					}
					else if (player->potions == 0)
					{
						//invalid action
						std::cout << "You go to drink a potion, but you find your pockets empty!\n";
						std::cout << "Your opponent takes advantage of your blunder. \n";
					}
					break;
				}
			case 4:
				action = 4;
				{
					//player surrenders
					std::cout << "You toss yourself to the ground.\nYour opponent pities you and you run off before he changes his mind.\n";
					break;
				}
			}

			if (enemy->health <= 0)
			{
				enemyDead = true;
			}
			else if (enemy->food > 0)
			{
				enemyFight();
			}
		}
		else
		{
			std::cout << "You are dead.\n"; 
			break;
		}
	}
	//end of fight stuff
	enemy->displayStats;
	std::cout << "With love for your people in your heart, you slay your enemy.\n";
	std::cout << "You have fought valiantly, and the enemy is defeated!\n";
	std::cout << "*** *** *** *** *** *** ***\n";

	enemy->reset(); //reset enemy to normal stats

	player->score++;//update player score

	//give player money
	int randomGold = 0;
	randomGold = rand() % 6 + 1;
	player->gold += randomGold;
	std::cout << "You make some money off of people's bets.\n";
	std::cout << "You make " << randomGold << " gold!\n";
	std::cout << "*** *** *** *** *** *** ***\n";
}


void enemyFight()
{
	int actionPicker;
	actionPicker = rand() % 3 + 1;

	switch (actionPicker)
	{
	case 1:
		actionPicker = 1;
		{
			if (enemy->weapons > 0)
			{
				int damage;
				damage = enemy->meleeAttack();
				player->health -= damage;
				enemy->food--;
				enemy->weapons--;

				std::cout << "*** *** *** *** *** *** ***\n";
				std::cout << "Enemy struck you with his weapon for " << damage << " damage.\n";
				std::cout << "*** *** *** *** *** *** ***\n";

				system("pause");
			}
			else
			{
				std::cout << "*** *** *** *** *** *** ***\n";
				std::cout << "Your enemy grasps at his waist for a weapon, but he has none!\n";
				std::cout << "*** *** *** *** *** *** ***\n";
			}
			break;
		}
	case 2:
		actionPicker = 2;
		{
			if (enemy->scrolls > 0)
			{
				int damage;
				damage = enemy->magicAttack();
				player->health -= damage;
				enemy->food--;
				enemy->scrolls--;

				std::cout << "*** *** *** *** *** *** ***\n";
				std::cout << "Enemy shot you with his magic for " << damage << " damage.\n";
				std::cout << "*** *** *** *** *** *** ***\n";

				system("pause");
			}
			else
			{
				std::cout << "*** *** *** *** *** *** ***\n";
				std::cout << "Your enemy digs through his bag for a scroll, but he has none!\n";
				std::cout << "*** *** *** *** *** *** ***\n";
			}
			break;
		}
	case 3:
		actionPicker = 3;
		{
			if (enemy->potions > 0)
			{
				int restore;
				restore = enemy->quaffPotion();
				enemy->health += restore;
				enemy->food--;
				enemy->potions--;

				std::cout << "*** *** *** *** *** *** ***\n";
				std::cout << "Enemy quaffed a potion. He was healed for " << restore << " health.\n";
				std::cout << "*** *** *** *** *** *** ***\n";

				system("pause");
			}
			else
			{
				std::cout << "*** *** *** *** *** *** ***\n";
				std::cout << "Your enemy puts a bottle to his mouth and throws it away, shocked.\nHe is out of potions!\n";
				std::cout << "*** *** *** *** *** *** ***\n";
			}
			break;
		}
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

