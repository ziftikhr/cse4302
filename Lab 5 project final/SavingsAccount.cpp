
#include "savingsaccount.h"

double SavingsAccount::annualInterestRate = 0.0; // Initialize the static member

SavingsAccount::SavingsAccount(double balance) {
    savingsBalance = balance;
}

void SavingsAccount::calculateMonthlyInterest() {
    double monthlyInterest = (savingsBalance * annualInterestRate) / 12.0;
    savingsBalance += monthlyInterest;
}

void SavingsAccount::modifyInterestRate(double newRate) {
    annualInterestRate = newRate;
}

double SavingsAccount::getBalance() const {
    return savingsBalance;
}

double SavingsAccount::getAnnualInterestRate() {
    return annualInterestRate;
}
