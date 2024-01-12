#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

using namespace std;

class Account {
public:
    Account(string name, float bal);
    string getAccountNo();
    void setAccountNo(string no);
    string getAccountName();
    void setAccountName(string nm);
    float getBalance();
    void setBalance(float bal);

private:
    string accountNo;
    string accountName;
    float balance;
};

#endif
