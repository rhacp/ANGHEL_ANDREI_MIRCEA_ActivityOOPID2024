#include <iostream>
#include "AccountList.h"

using namespace std;

AccountList::AccountList() {
}

void AccountList::addAccount(const CreditAccount& account) {
	m_accountList.push_back(account);
}

const CreditAccount& AccountList::getAccountById(const long& accountId) const {
	return m_accountList.at(accountId - 1);
}