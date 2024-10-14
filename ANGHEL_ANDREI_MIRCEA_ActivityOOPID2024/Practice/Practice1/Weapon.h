#pragma once
#include <iostream>

class Weapon
{
private:
	std::string m_name;
	int m_power = 5;
	std::string m_owner = "UnNimeni";

public:
	Weapon(const std::string& name, int power);

	void printWeapon() const;

	void setOwner(const std::string& owner);
};
