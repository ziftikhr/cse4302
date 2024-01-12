#ifndef MONTHLYDEPOSITSCHEME_H
#define MONTHLYDEPOSITSCHEME_H

#include "account.h"
using namespace std;
class MonthlyDepositScheme : public Account {
public:
    MonthlyDepositScheme(string acctName, float bal, float intRate, float mda);
    float getInterestRate();
    float getMonthlyDepositAmount();
    void nextAccountNo();

private:
    float interestRate;
    float monthlyDepositAmount;
    const static int accountPrefix;
    static int nextAccount;
};

#endif
