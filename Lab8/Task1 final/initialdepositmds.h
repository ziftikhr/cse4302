#ifndef INITIALDEPOSITMDS_H
#define INITIALDEPOSITMDS_H

#include "monthlydepositscheme.h"
using namespace std;
class InitialDepositMDS : public MonthlyDepositScheme {
public:
    InitialDepositMDS(string acctName, float bal, float intRate, float mda, float maxInt, float intDepo);
    float getMaximumInterest();
    void setMaximumInterest(float inter);
    float getInitialDepositAmount();
    void setInitialDepositAmount(float val);
    void description();

private:
    float maximumInterest;
    float initialDepositAmount;
};

#endif
