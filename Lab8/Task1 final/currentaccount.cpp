#include "currentaccount.h"

using namespace std;
int CurrentAccount::serviceCharge = 100;
int CurrentAccount::accountPrefix = 100;
int CurrentAccount::nextAccount = 1;

CurrentAccount::CurrentAccount(string acctName, float bal) : Account(acctName, bal) {
    nextAccountNo();
    nextAccount++;
}

int CurrentAccount::getServiceCharge() {
    return serviceCharge;
}

int CurrentAccount::getAccountPrefix() {
    return accountPrefix;
}

void CurrentAccount::nextAccountNo() {
    setAccountNo(to_string(accountPrefix) + to_string(nextAccount));
}
