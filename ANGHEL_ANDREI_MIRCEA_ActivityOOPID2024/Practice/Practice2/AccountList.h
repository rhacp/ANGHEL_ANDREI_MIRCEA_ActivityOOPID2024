#pragma once
#include <iostream>
#include <vector>
#include "CreditAccount.h"

using namespace std;

class AccountList {
private:
	vector<CreditAccount> m_accountList;

public:
	AccountList();

	void addAccount(const CreditAccount& account);

	const CreditAccount& getAccountById(const long& accountId) const;
};
