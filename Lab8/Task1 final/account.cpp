#include "account.h"
using namespace std;
Account::Account(string name, float bal) {
    accountName = name;
    balance = bal;
}

std::string Account::getAccountNo() {
    return accountNo;
}

void Account::setAccountNo(string no) {
    accountNo = no;
}

std::string Account::getAccountName() {
    return accountName;
}

void Account::setAccountName(string nm) {
    accountName = nm;
}

float Account::getBalance() {
    return balance;
}

void Account::setBalance(float bal) {
    balance = bal;
}
