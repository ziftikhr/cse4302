#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "account.h"
using namespace std;
class SavingsAccount : public Account {
public:
    SavingsAccount(string acctName, float bal, float intRate, float mda);
    float getInterestRate();
    float getMonthlyDepositAmount();
    static int getAccountPrefix();
    void nextAccountNo();

private:
    float interestRate;
    float monthlyDepositAmount;
    const static int accountPrefix;
    static int nextAccount;
};

#endif
