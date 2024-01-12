#ifndef TWOYEARMDS_H
#define TWOYEARMDS_H

#include "monthlydepositscheme.h"
using namespace std;
class TwoYearMDS : public MonthlyDepositScheme {
public:
    TwoYearMDS(string acctName, float bal, float intRate, float mda, float maxInt);
    float getMaximumInterest();
    void setMaximumInterest(float inter);
    void description();

private:
    float maximumInterest;
};

#endif
