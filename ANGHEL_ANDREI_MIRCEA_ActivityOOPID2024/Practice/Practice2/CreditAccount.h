#pragma once
#include <iostream>
#include "Account.h"

using namespace std;

class CreditAccount : public Account {
private:
	int m_limit;

public:
	CreditAccount(const string& bank, const string& owner, const int& sum, const int& limit);

	void setLimit(const int& limit);

	const int& getLimit() const;

	const void printObject() const;
};