#include "Dwarf.h"
#include <iostream>
#include <vector>
#include <fstream>

Dwarf::Dwarf(const std::string& name)
	: m_name(name) {
}

void Dwarf::printDwarf() const {
	std::cout << m_name << std::endl;
	std::cout << "Inventory:" << std::endl;

	for (auto& weapon : m_weapons)
	{
		weapon.printWeapon();
	}
}

void Dwarf::addWeapon(Weapon weapon) {
	weapon.setOwner(m_name);
	m_weapons.push_back(weapon);
}

void Dwarf::loadWeapons(const std::string& path) {
	std::ifstream fIn(path);

	std::string name;
	int power;

	while (fIn >> name)
	{
		fIn >> power;
		addWeapon(Weapon(name, power));
	}
}