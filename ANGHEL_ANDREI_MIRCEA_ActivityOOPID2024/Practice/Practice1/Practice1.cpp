#include <iostream>
#include "Dwarf.h"
#include "Practice1.h"



int mainPracticeOne() {
	Dwarf dwarf1("Marcus");
	Weapon scimitar("Goblin Cimitar", 5);

	dwarf1.loadWeapons("Practice/Practice1/Stuff.txt");
	dwarf1.printDwarf();

	return 0;
}