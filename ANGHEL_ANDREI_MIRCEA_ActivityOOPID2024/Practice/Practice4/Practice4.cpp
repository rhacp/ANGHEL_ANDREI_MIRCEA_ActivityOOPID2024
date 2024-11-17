#include <iostream>
#include "Practice4.h"
#include "Autobuz.h"

using namespace std;

int mainPracticeFour() {
	Autobuz firstAutobuz;
	cout << firstAutobuz;
	cout << endl<<endl;

	char* producator = new char[7]{"NISSAN"};
	Autobuz secondAutobuz(10, 5, producator);
	cout << secondAutobuz;
	cout << endl << endl;

	Autobuz thirdAutobuz = secondAutobuz;
	cout << thirdAutobuz;
	cout << endl << endl;

	thirdAutobuz.setCapacitate(30);
	thirdAutobuz.setNrPersoaneImbarcate(20);
	char* secondProducator = new char[9] {"MERCEDES"};
	thirdAutobuz.setProducator(secondProducator);
	cout << thirdAutobuz;
	cout << endl << endl;

	cout << thirdAutobuz.getCapacitate() << " " << thirdAutobuz.getNrPersoaneImbarcate() << " " << thirdAutobuz.getProducator() << endl << endl;
	
	cout << "Nr. locuri libere: " << thirdAutobuz.getNumarLocuriLibere() << endl << endl;

	cout << (int)thirdAutobuz << endl << endl;

	cout << "secondAutobuz > thirdAutobuz = ";
	bool helper = secondAutobuz > thirdAutobuz;
	cout << helper;
	cout << endl << endl;

	return 0;
}