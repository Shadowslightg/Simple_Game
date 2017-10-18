#include <iostream>
#include <string>
#include "Beastiary.h"
using namespace std;


void printMonster(Monster monster);
string getMonsterType(Monster monster);

int main()
{
	Monster ogre = { MonsterType::OGRE, "Torg", 145 };
	Monster slime = { MonsterType::SLIME, "Blurp", 23 };
 
	printMonster(ogre);
	printMonster(slime);
 
	return 0;
}