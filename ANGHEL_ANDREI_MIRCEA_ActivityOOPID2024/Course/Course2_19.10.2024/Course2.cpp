#include <iostream>
#include "Car.h"
#include "Course2.h"

using namespace std;

int mainCourseTwo() {
	//Car carOne("BMV", 5, new float[5] {3.99, 5, 8, 9, 9.99});

	//carOne.printObject();

	//carOne.setPrices(new float[6] {3, 4, 5, 6, 7, 8}, 6);

	//carOne.printObject();

	//Car carTwo;

	//carTwo.printObject();

	Car* vectorCar = new Car[3];
	for (int i = 0; i < 3; i++) {
		vectorCar[i].printObject();
	}

	Car** vectorP = new Car * [3];
	for (int i = 0; i < 3; i++) {
		vectorP[i] = new Car("BMV", 3, new float[3] {2, 3, 4});
	}

	Car carOne("BMV", 3, new float[3] {2, 3, 4});
	Car carTwo = carOne;

	Car carThree;
	//carThree = carOne; //pt masina 3 a fost deja apelat constructorul, asa ca aici nu se va apela in mod cert niciun constructor

	carThree = carOne;
	carThree.operator=(carOne);

	// Daca e facut void, nu poate fi apelat in cascada asa:
	//carThree = carTwo = carOne;
	//carThree = void

	carThree += 1000;

	carThree = 1000 + carTwo;

	return 0;
}