#pragma once
#include <iostream>

using namespace std;

class Car {
private:
	const long m_id;
	static int m_carNumber;
	string m_brand;
	int m_componentNumber;
	float* m_prices;

public:
	~Car();

	Car();

	Car(const string& brand, const int& componentNumber, const float* prices);

	Car(const Car& m);

	//void operator=(const Car& m);

	const Car& operator=(const Car& m);

	const Car& operator+=(float price);

	Car operator+(float price) const;

	const void printObject() const;

	void setBrand(const string& brand);

	void setComponentNumber(const int& componentNumber);

	void setPrices(const float* prices, const int& newDimension);

	const string& getBrand() const;

	const int& getComponentNumber() const;

	const float* getPrices();
};

Car operator+(float price, Car m);