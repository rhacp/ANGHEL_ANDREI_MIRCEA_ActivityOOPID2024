#pragma once
#include <iostream>

using namespace std;

class Robot {
public:
	string name;
	int softVersion;
	float memory;
	bool biped;
	char* color;

	~Robot();

	Robot();

	Robot(string name, int softVersion, float memory, bool biped, const char* color);

	void print();
};