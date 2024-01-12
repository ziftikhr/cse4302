#include "savingsaccount.h"
using namespace std;
int SavingsAccount::accountPrefix = 200;
int SavingsAccount::nextAccount = 2;

SavingsAccount::SavingsAccount(string acctName, float bal, float intRate, float mda) : Account(acctName, bal) {
    nextAccountNo();
    nextAccount++;
    interestRate = intRate;
    monthlyDepositAmount = mda;
}

float SavingsAccount::getInterestRate() {
    return interestRate;
}

float SavingsAccount::getMonthlyDepositAmount() {
    return monthlyDepositAmount;
}

int SavingsAccount::getAccountPrefix() {
    return accountPrefix;
}

void SavingsAccount::nextAccountNo() {
    setAccountNo(std::to_string(accountPrefix) + std::to_string(nextAccount));
}
