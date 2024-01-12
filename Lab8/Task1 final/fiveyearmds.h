#ifndef FIVEYEARMDS_H
#define FIVEYEARMDS_H

#include "monthlydepositscheme.h"
using namespace std;
class FiveYearMDS : public MonthlyDepositScheme {
public:
    FiveYearMDS(string acctName, float bal, float intRate, float mda, float maxInt);
    float getMaximumInterest();
    void setMaximumInterest(float inter);
    void description();

private:
    float maximumInterest;
};

#endif
