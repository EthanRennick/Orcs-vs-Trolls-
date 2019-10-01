#include <iostream>

//using namespace std;
void intro();


class Character { //abstract class with no implementation for fly
public:
	void flip() { std::cout << "I know how to flip and I will flipping do it" << std::endl; }
	virtual void walk() { std::cout << "just in case they are too young to walk yet" << std::endl; }
	virtual void fly() = 0; //pure virtual function - cant create characters cos its an abstract class only create objects that are(nt) characters that implement fly = inheritance
	//no implementation for method fly ?
};


/// <summary>
/// so an orc char can barrelroll and walk but a troll character can just fly
/// </summary>
class Orc : public Character {
public:
	void barrelRoll() { std::cout << "rooooooolllllllllllinggggggg" << std::endl; }
	void walk() { std::cout << "Doopers have a really cool walk!" << std::endl; }
	void fly() { std::cout << "Dooper is flapping and flying" << std::endl; }
	//this guy has an implementation for fly
};

class Troll : public Character {
public:
	void fly() { std::cout << "Average Dooper is flapping and flying" << std::endl; }
	//this guy has implemented fly
};

int main(void)
{
	std::cout << "Let go virtual" << std::endl;
	//Character character;
	//character.flip(); 
	//character.walk();

	std::cout << "Let go create an Orc" << std::endl;
	Orc orc;
	orc.walk();
	orc.fly();
	orc.flip();

	std::cout << "Let go create an Troll" << std::endl;
	Troll troll;
	troll.walk();
	troll.fly();
	troll.flip();

	Character* npc = &orc;
	npc->flip();
	npc->fly();
	npc->walk();

	npc = &troll;
	npc->flip();
	npc->fly();
	npc->walk();

	std::cin.get();
}


void intro()
{
	std::cout << "Welcome to Purassic Jark, \nthe battlefield of this war we've been fighting for generations. \nYou are our trollen champion.";
		/// <summary>
		/// 
		/// </summary>



};