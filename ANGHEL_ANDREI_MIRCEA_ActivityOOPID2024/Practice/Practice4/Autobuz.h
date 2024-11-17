#pragma once
#include <iostream>

using namespace std;

class Autobuz {
private:
	static int nrAutobuze;
	const int idAutobuz;
	int capacitate;
	int nrPersoaneImbarcate;
	char* producator;

public:
	~Autobuz();

	Autobuz();

	Autobuz(int capacitate, int nrPersoaneImbarcate, char* producator);

	Autobuz(const Autobuz& autobuz);

	const Autobuz& operator=(const Autobuz& autobuz);

	friend const ostream& operator<<(ostream& consola, const Autobuz& autobuz);

	const bool operator>(const Autobuz& autobuz);

	operator int() const;

	const void printObject() const;

	void setCapacitate(int capacitate);

	void setNrPersoaneImbarcate(int nrPersoaneImbarcate);

	void setProducator(char* producator);

	const int getCapacitate() const;

	const int getNrPersoaneImbarcate() const;

	const char* getProducator() const;

	const int getNumarLocuriLibere() const;
};

const ostream& operator<<(ostream& consola, const Autobuz& autobuz);
