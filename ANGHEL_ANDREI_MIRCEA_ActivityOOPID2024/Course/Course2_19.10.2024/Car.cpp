#include <iostream>
#include "Car.h"

using namespace std;

Car::Car() :m_id(++m_carNumber) {
	this->m_brand = "Necunoscut";
	this->m_componentNumber = 0;
	this->m_prices = nullptr;
}

Car::Car(const string& brand, const int& componentNumber, const float* prices) :m_id(++m_carNumber) {
	this->m_brand = brand;
	this->m_componentNumber = componentNumber;
	this->m_prices = new float[componentNumber];
	
	for (int i = 0; i < componentNumber; i++) {
		this->m_prices[i] = prices[i];
	}

	delete[] prices;
}

const void Car::printObject() const {
	cout << "{\n    Id: " << this->m_id << ","
		<< "\n    Number of Cars: " << this->m_carNumber << ","
		<< "\n    Brand: " << this->m_brand << ","
		<< "\n    Number of Components: " << this->m_componentNumber << ","
		<< "\n    Prices of Components: {"; 
	if (this->m_componentNumber > 0) {
		if (this->m_prices != nullptr) {
			for (int i = 0; i < this->m_componentNumber; i++) {
				if (i == this->m_componentNumber - 1) {
					cout << "\n        " << this->m_prices[i];
				}
				else {
					cout << "\n        " << this->m_prices[i] << ",";
				}
			}
		}
	}
	cout << "\n    }\n}\n";
}

void Car::setBrand(const string& brand) {
	this->m_brand = brand;
}

void Car::setComponentNumber(const int& componentNumber) {
	this->m_componentNumber = componentNumber;
}

void Car::setPrices(const float* prices, const int& newDimension) {
	setComponentNumber(newDimension);

	if (this->m_prices != nullptr) {
		delete[] this->m_prices;
	}

	this->m_prices = new float[newDimension];

	for (int i = 0; i < this->m_componentNumber; i++) {
		this->m_prices[i] = prices[i];
	}

	delete[] prices;
}

const string& Car::getBrand() const {
	return this->m_brand;
}

const int& Car::getComponentNumber() const {
	return this->m_componentNumber;
}

const float* Car::getPrices() {
	float* priceVector = new float[this->m_componentNumber];

	for (int i = 0; i < this->m_componentNumber; i++) {
		priceVector[i] = this->m_prices[i];
	}

	return priceVector;
}

int Car::m_carNumber = 0;