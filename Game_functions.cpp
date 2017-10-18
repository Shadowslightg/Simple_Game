#include <iostream>
#include <string>
#include "Beastiary.h" 


string getMonsterType(Monster monster)
{
	if (monster.type == MonsterType::OGRE)
		return "Ogre";
	if (monster.type == MonsterType::DRAGON)
		return "Dragon";
	if (monster.type == MonsterType::ORC)
		return "Orc";
	if (monster.type == MonsterType::GIANT_SPIDER)
		return "Giant Spider";
	if (monster.type == MonsterType::SLIME)
		return "Slime";
	if (monster.type == MonsterType::SQUIRREL)
		return "Squirrel";
 	return "Unknown";
}
 
// Print our monster's stats
void printMonster(Monster monster)
{
	std::cout << "This " << getMonsterType(monster) <<
		" is named " << monster.name <<
		" and has " << monster.health << " health.\n";
}
 
// Print our monster's stats
void printMonster(Monster monster)
{
	std::cout << "This " << getMonsterType(monster) <<
		" is named " << MonsterType.name <<
		" and has " << MonsterType.health << " health.\n";
}
