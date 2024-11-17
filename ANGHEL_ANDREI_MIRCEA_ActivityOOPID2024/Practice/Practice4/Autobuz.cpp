#include <iostream>
#include "Autobuz.h"

using namespace std;

Autobuz::~Autobuz() {
	if (this->producator != nullptr) {
		delete[] this->producator;
	}
}

Autobuz::Autobuz() :idAutobuz(++nrAutobuze){
	this->capacitate = 0;
	this->nrPersoaneImbarcate = 0;
	this->producator = nullptr;
}

Autobuz::Autobuz(int capacitate, int nrPersoaneImbarcate, char* producator) :idAutobuz(++nrAutobuze) {
	if (capacitate >= 0) {
		this->capacitate = capacitate;
	}
	else {
		this->capacitate = 0;
	}

	if (nrPersoaneImbarcate >= 0 && nrPersoaneImbarcate <= capacitate) {
		this->nrPersoaneImbarcate = nrPersoaneImbarcate;
	}
	else {
		this->nrPersoaneImbarcate = 0;
	}
	
	if (producator == nullptr) {
		this->producator = nullptr;
	}
	else {
		this->producator = new char[strlen(producator) + 1];

		for (int i = 0; i < strlen(producator) + 1; i++) {
			this->producator[i] = producator[i];
		}

		delete[] producator;
	}
}

Autobuz::Autobuz(const Autobuz& autobuz) :idAutobuz(++nrAutobuze){
	this->capacitate = autobuz.capacitate;
	this->nrPersoaneImbarcate = autobuz.nrPersoaneImbarcate;

	if (autobuz.producator != nullptr) {
		this->producator = new char[strlen(autobuz.producator) + 1];
		strcpy_s(this->producator, strlen(autobuz.producator) + 1, autobuz.producator);
	}
	else {
		this->producator = nullptr;
	}
}

const Autobuz& Autobuz::operator=(const Autobuz& autobuz) {
	if (this == &autobuz) {
		return *this;
	}

	this->capacitate = autobuz.capacitate;
	this->nrPersoaneImbarcate = autobuz.nrPersoaneImbarcate;
	if (this->producator != nullptr) {
		delete[] producator;
	}
	this->producator = new char[strlen(autobuz.producator) + 1];

	for (int i = 0; i < strlen(autobuz.producator) + 1; i++) {
		this->producator[i] = autobuz.producator[i];
	}

	return *this;
}

const bool Autobuz::operator>(const Autobuz& autobuz) {
	return (this->capacitate > autobuz.capacitate);
}

Autobuz::operator int() const {
	return this->nrPersoaneImbarcate;
}

const void Autobuz::printObject() const {
	cout << "{\n    \"nrAutobuze\": \"" << this->nrAutobuze << "\","
		<< "\n    \"idAutobuz\": \"" << this->idAutobuz << "\","
		<< "\n    \"capacitate\": \"" << this->capacitate << "\","
		<< "\n    \"nrPersoaneImbarcate\": \"" << this->nrPersoaneImbarcate << "\","
		<< "\n    \"producator\": \"";
	if (this->producator != nullptr) {
		for (int i = 0; i < strlen(this->producator); i++) {
			cout << this->producator[i];
		}
	}
	cout << "\"\n}";
}

void Autobuz::setCapacitate(int capacitate) {
	this->capacitate = capacitate;
}

void Autobuz::setNrPersoaneImbarcate(int nrPersoaneImbarcate) {
	this->nrPersoaneImbarcate = nrPersoaneImbarcate;
}

void Autobuz::setProducator(char* producator) {
	if (this->producator != nullptr) {
		delete[] this->producator;
	}

	this->producator = new char[strlen(producator) + 1];

	for (int i = 0; i <= strlen(producator) + 1; i++) {
		this->producator[i] = producator[i];
	}

	delete[] producator;
}

const int Autobuz::getCapacitate() const {
	return this->capacitate;
}

const int Autobuz::getNrPersoaneImbarcate() const {
	return this->nrPersoaneImbarcate;
}

const char* Autobuz::getProducator() const {
	char* returnedProducator = new char[strlen(this->producator) + 1];
	strcpy_s(returnedProducator, strlen(this->producator) + 1, this->producator);

	return returnedProducator;
}

const int Autobuz::getNumarLocuriLibere() const {
	return (this->capacitate - this->nrPersoaneImbarcate);
}

int Autobuz::nrAutobuze = 0;

const ostream& operator<<(ostream& consola, const Autobuz& autobuz) {
	consola << "nrAutobuze: " << autobuz.nrAutobuze << "; " << "idAutobuz: " << autobuz.idAutobuz << "; "
		<< "capacitate: " << autobuz.capacitate << "; " << "nrPersoaneImbarcate: " << autobuz.nrPersoaneImbarcate << "; "
		<< "producator: ";
	if (autobuz.producator != nullptr) {
		for (int i = 0; i < strlen(autobuz.producator); i++) {
			consola << autobuz.producator[i];
		}
	}
	else {
		consola << "";
	}

	return consola;
}