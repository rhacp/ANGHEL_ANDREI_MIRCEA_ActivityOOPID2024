#include <iostream>
#include "Weapon.h"

Weapon::Weapon(const std::string& name, int power)
	: m_name(name)
	, m_power(power) {
}

void Weapon::printWeapon() const {
	std::cout << m_name << " : " << m_power << " : " << m_owner << std::endl;
}

void Weapon::setOwner(const std::string& owner) {
	m_owner = owner;
}