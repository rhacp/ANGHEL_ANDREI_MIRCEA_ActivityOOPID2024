#include <iostream>
#include "Car.h"
#include "Course2.h"

using namespace std;

int mainCourseTwo() {
	Car carOne("BMV", 5, new float[5] {3.99, 5, 8, 9, 9.99});

	carOne.printObject();

	carOne.setPrices(new float[6] {3, 4, 5, 6, 7, 8}, 6);

	carOne.printObject();

	Car carTwo;

	carTwo.printObject();

	return 0;
}