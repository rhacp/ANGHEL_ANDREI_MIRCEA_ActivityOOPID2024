#include <iostream>
#include "CreditAccount.h"
#include "AccountList.h"

using namespace std;

int mainPracticeTwo() {
	AccountList accountList;

	CreditAccount creditAccount("ING", "John Doe", 0, 500);

	accountList.addAccount(creditAccount);

	creditAccount.printObject();

	return 0;
}