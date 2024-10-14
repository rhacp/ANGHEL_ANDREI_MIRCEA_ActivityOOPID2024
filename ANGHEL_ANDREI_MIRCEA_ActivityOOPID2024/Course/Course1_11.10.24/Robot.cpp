#include "Robot.h"
#include <iostream>

using namespace std;

Robot::~Robot() {
	if (this->color != NULL) {
		delete[]this->color;
	}
}

Robot::Robot() {

}

Robot::Robot(string name, int softVersion, float memory, bool biped, const char* color) {
	this->name = name;
	this->softVersion = softVersion;
	this->memory = memory;
	this->biped = biped;
	this->color = new char[strlen(color) + 1];
	strcpy_s(this->color, strlen(color) + 1, color);
}

void Robot::print() {
	cout << "{\n    Name: "
		<< this->name + ", \n    Soft Version: "
		<< this->softVersion << ", \n    Memory: "
		<< this->memory << ", \n    Biped: "
		<< (this->biped ? "Da" : "Nu") << ", \n    Color: "
		<< this->color << "\n}\n\n";
}