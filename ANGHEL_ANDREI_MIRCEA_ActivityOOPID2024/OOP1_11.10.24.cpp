#include<iostream>

using namespace std;

class Robot {
public:
	string name;
	int softVersion;
	float memory;
	bool biped;
	char* color;

	~Robot() {
		if (this->color != NULL) {
			delete[]this->color;
		}
	}

	Robot() {

	}

	Robot(string name, int softVersion, float memory, bool biped, const char* color) {
		this->name = name;
		this->softVersion = softVersion;
		this->memory = memory;
		this->biped = biped;
		this->color = new char[strlen(color) + 1];
		strcpy_s(this->color, strlen(color) + 1, color);
	}

	void print() {
		cout << "{\n    Name: "
			<< this->name + ", \n    Soft Version: "
			<< this->softVersion << ", \n    Memory: "
			<< this->memory << ", \n    Biped: "
			<< (this->biped ? "Da" : "Nu") << ", \n    Color: "
			<< this->color << "\n}\n\n";
	}
};

void main() {
	//un pointer ocupa 4 sau 8 depinzand de sist de operare (x32 & x64);
	int* p;

	// ROBOT ONE
	Robot robotOne;
	robotOne.name = "Tesla";
	robotOne.softVersion = 2;
	robotOne.memory = 256.7;
	robotOne.biped = true;
	robotOne.color = new char[strlen("Red") + 1];
	strcpy_s(robotOne.color, strlen("Red") + 1, "Red");

	robotOne.print();

	// ROBOT TWO
	Robot* robotTwo = new Robot("Nissan", 3, 128.4, false, "Green");
	robotTwo->print();
}