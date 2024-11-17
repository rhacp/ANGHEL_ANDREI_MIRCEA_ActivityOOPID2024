#pragma once
#include <iostream>

using namespace std;

class Weapon {
private:
	const long m_id;
	int m_attack;
	string* m_materials;
	float* m_materialPrices;
	static int m_weaponNumber;

public:
	~Weapon();

	Weapon();

	Weapon(int durability, const string& materials, float* materialPrices);

	static float getTotalPrice();

};
