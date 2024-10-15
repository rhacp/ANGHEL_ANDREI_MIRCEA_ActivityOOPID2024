#include <iostream>
#include "CreditAccount.h"

using namespace std;

CreditAccount::CreditAccount(const string& bank, const string& owner, const int& sum, const int& limit)
	: m_limit(limit) {
	setBank(bank);
	setOwner(owner);
	setSum(sum);
}

void CreditAccount::setLimit(const int& limit) {
	m_limit = limit;
}

const int& CreditAccount::getLimit() const {
	return m_limit;
}

const void CreditAccount::printObject() const {
	cout << "{\n    Bank: " << getBank()
		<< "\n    Owner: " << getOwner()
		<< "\n    Sum: " << getSum()
		<< "\n    Limit: " << m_limit
		<< "\n}";
}