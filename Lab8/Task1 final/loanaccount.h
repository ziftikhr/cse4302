#ifndef LOANACCOUNT_H
#define LOANACCOUNT_H

#include "account.h"
using namespace std;

class LoanAccount : public Account {
public:
    LoanAccount(string acctName, float bal, float intRate, float mda);
    void nextAccountNo();

private:
    float interestRate;
    float monthlyDepositAmount;
    const static int accountPrefix;
    static int nextAccount;
};

#endif
