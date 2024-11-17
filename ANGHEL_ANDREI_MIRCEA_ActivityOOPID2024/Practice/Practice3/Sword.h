#pragma once
#include <iostream>

using namespace std;

class Sword {
private:
	const long m_id;
	int m_attack;
	int m_durability;
	string* m_materials;
	float* m_materialPrices;
	static int m_swordNumber;

public:
	~Sword();

	Sword();

	Sword(int attack, int durability, const string& materials, float* materialPrices);

	static float getTotalPrice();
};
