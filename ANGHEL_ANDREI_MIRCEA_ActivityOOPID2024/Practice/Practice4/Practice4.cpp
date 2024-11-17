#include <iostream>
#include "Practice4.h"
#include "Autobuz.h"

using namespace std;

int mainPracticeFour() {
	cout << "Constructor fara parametrii." << endl << endl;
	Autobuz firstAutobuz;
	cout << "firstAutobuz:" << endl;
	cout << firstAutobuz;
	cout << endl<<endl;
	cout << "-----------------------------------" << endl << endl;

	cout << "Constructor cu parametrii." << endl << endl;
	cout << "secondAutobuz:" << endl;
	char* producator = new char[7]{"NISSAN"};
	Autobuz secondAutobuz(10, 5, producator);
	cout << secondAutobuz;
	cout << endl << endl;
	cout << "-----------------------------------" << endl << endl;

	cout << "Constructor de copiere." << endl << endl;
	cout << "thirdAutobuz:" << endl;
	Autobuz thirdAutobuz = secondAutobuz;
	cout << thirdAutobuz;
	cout << endl << endl;
	cout << "-----------------------------------" << endl << endl;

	cout << "Setters." << endl << endl;
	cout << "thirdAutobuz:" << endl;
	thirdAutobuz.setCapacitate(30);
	thirdAutobuz.setNrPersoaneImbarcate(20);
	char* secondProducator = new char[9]{"MERCEDES"};
	thirdAutobuz.setProducator(secondProducator);
	cout << thirdAutobuz;
	cout << endl << endl;
	cout << "-----------------------------------" << endl << endl;

	cout << "Getters." << endl << endl;
	cout << thirdAutobuz.getCapacitate() << " " << thirdAutobuz.getNrPersoaneImbarcate() << " " << thirdAutobuz.getProducator() << endl << endl;
	cout << "-----------------------------------" << endl << endl;

	cout << "getNumarLocuriLibere." << endl << endl;
	cout << "Nr. locuri libere: " << thirdAutobuz.getNumarLocuriLibere() << endl << endl;
	cout << "-----------------------------------" << endl << endl;

	cout << "Operator de cast la int." << endl << endl;
	cout << "Numar de persoane urcate deja in autobuz: " << (int)thirdAutobuz << endl << endl;
	cout << "-----------------------------------" << endl << endl;

	cout << "Operator >." << endl << endl;
	cout << "secondAutobuz > thirdAutobuz = ";
	string helper = secondAutobuz > thirdAutobuz ? "true" : "false";
	cout << helper;
	cout << endl << endl;
	cout << "-----------------------------------" << endl << endl;

	cout << "Print object in JSON format." << endl << endl;
	cout << "thirdAutobuz:" << endl;
	thirdAutobuz.printObject();
	cout << endl << endl;

	return 0;
}