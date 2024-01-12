#ifndef CURRENTACCOUNT_H
#define CURRENTACCOUNT_H

#include "account.h"
using namespace std;
class CurrentAccount : public Account {
public:
    CurrentAccount(string acctName, float bal);
    static int getServiceCharge();
    static int getAccountPrefix();
    void nextAccountNo();

private:
    const static int serviceCharge;
    const static int accountPrefix;
    static int nextAccount;
};

#endif
