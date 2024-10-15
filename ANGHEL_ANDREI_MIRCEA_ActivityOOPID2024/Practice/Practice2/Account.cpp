#include <iostream>
#include "Account.h"

using namespace std;

Account::Account() {
}

//Account::Account(const string& bank)
//	:m_bank(bank) {
//}

void Account::setId(const long& id) {
	m_id = id;
}

void Account::setBank(const string& bank) {
	m_bank = bank;
}

void Account::setOwner(const string& owner) {
	m_owner = owner;
}

void Account::setSum(const int& sum) {
	m_sum = sum;
}

const long& Account::getId() const {
	return m_id;
}

const string& Account::getBank() const {
	return m_bank;
}

const string& Account::getOwner() const {
	return m_owner;
}

const int& Account::getSum() const {
	return m_sum;
}

const int& Account::deductSum(const int& deduct) {
	setSum(m_sum - deduct);
	return m_sum;
}
