#pragma once
#include <iostream>
#include <vector>
#include "Weapon.h"

class Dwarf {
private:
	std::string m_name;
	std::vector<Weapon> m_weapons;

public:
	Dwarf(const std::string& name);

	void printDwarf() const;

	void addWeapon(Weapon weapon);

	void loadWeapons(const std::string& path);
};
