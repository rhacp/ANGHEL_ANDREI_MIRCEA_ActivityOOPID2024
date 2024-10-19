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
	Car();

	Car(const string& brand, const int& componentNumber, const float* prices);

	const void printObject() const;

	void setBrand(const string& brand);

	void setComponentNumber(const int& componentNumber);

	void setPrices(const float* prices, const int& newDimension);

	const string& getBrand() const;

	const int& getComponentNumber() const;

	const float* getPrices();
};