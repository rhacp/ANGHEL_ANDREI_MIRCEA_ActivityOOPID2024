#include <iostream>
#include "Car.h"

using namespace std;

Car::~Car() {
	if (this->m_prices != nullptr) {
		delete[] this->m_prices;
	}
}

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

Car::Car(const Car& m) :m_id(++m_carNumber) {
	this->m_brand = m.m_brand;
	this->m_componentNumber = m.m_componentNumber;
	this->m_prices = new float[this->m_componentNumber];

	for (int i = 0; i < this->m_componentNumber; i++) {
		this->m_prices[i] = m.m_prices[i];
	}
}

//void Car::operator=(const Car& m) {
//	if (this != &m) {
//		this->m_brand = m.m_brand;
//		this->m_componentNumber = m.m_componentNumber;
//		this->m_prices = new float[this->m_componentNumber];
//
//		if (this->m_prices != nullptr) {
//			delete[] this->m_prices;
//		}
//
//		for (int i = 0; i < this->m_componentNumber; i++) {
//			this->m_prices[i] = m.m_prices[i];
//		}
//	}
//}

const Car& Car::operator=(const Car& m) {
	if (this != &m) {
		this->m_brand = m.m_brand;
		this->m_componentNumber = m.m_componentNumber;

		if (this->m_prices != nullptr) {
			delete[] this->m_prices;
		}

		this->m_prices = new float[this->m_componentNumber];

		for (int i = 0; i < this->m_componentNumber; i++) {
			this->m_prices[i] = m.m_prices[i];
		}

		return *this;
	}
	else {
		return *this;
	}
}

const Car& Car::operator+=(float priceToAdd) {
	this->m_componentNumber++;

	float* aux = new float[this->m_componentNumber];

	for (int i = 0; i < this->m_componentNumber - 1; i++) {
		aux[i] = this->m_prices[i];
	}

	aux[this->m_componentNumber - 1] = priceToAdd;

	if (this->m_prices != nullptr) {
		delete[] this->m_prices;
	}

	this->m_prices = aux;

	return *this;
}

Car Car::operator+(float priceToAdd) const {
	Car temp = *this;

	float* aux = new float[temp.m_componentNumber + 1];

	for (int i = 0; i < this->m_componentNumber; i++) {
		aux[i] = this->m_prices[i];
	}

	aux[temp.m_componentNumber] = priceToAdd;

	if (temp.m_prices != nullptr) {
		delete[] temp.m_prices;
	}

	temp.m_prices = aux;
	temp.m_componentNumber++;

	return temp;
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

Car operator+(float priceToAdd, Car m) {
	Car temp = m + priceToAdd;
	return temp;
}