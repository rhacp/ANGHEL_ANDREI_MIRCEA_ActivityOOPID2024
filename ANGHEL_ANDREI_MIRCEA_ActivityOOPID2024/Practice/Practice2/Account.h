#pragma once
#include <iostream>

using namespace std;

class Account {
private:
	long m_id;
	string m_bank;
	string m_owner;
	int m_sum;

public:
	Account();

	//Account(const string& bank);

	void setId(const long& id);

	void setBank(const string& bank);

	void setOwner(const string& owner);

	void setSum(const int& sum);

	const long& getId() const;

	const string& getBank() const;

	const string& getOwner() const;

	const int& getSum() const;

	const int& deductSum(const int& deduct);
};