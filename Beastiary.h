// This is start of the header guard.  Beastiary_H can be any unique name.  By convention, we use the name of the header file.


#ifndef Beastiary_H
#define Beastiary_H

#include <iostream>
#include <string>
using namespace std; 

// class MonsterType {


// }

// This is the content of the Beastiary.h file, which is where the declarations go
class MonsterType  {
 // enum class MonsterType	{
	char OGRE;
	char DRAGON;
	char ORC;
	char GIANT_SPIDER;
	char SLIME;
	char SQUIRREL;
};
 
// Our monster struct represents a single monster
struct Monster 	{
	MonsterType type;
	std::string name;
	int health;
	int attack;
};

class Brain_child
{
public:
	std::string F_Name;
	std::string L_Name;
	std::string M_Name;
	void member()
	{
		std::cout << F_Name << " " << M_Name << " " << L_Name << " " << /*ID*/ std::endl;
	}
};

string getMonsterType(Monster monster);
void printMonster(Monster monster);
void member();
// function prototype for add.h -- don't forget the semicolon!
 
// This is the end of the header guard
#endif