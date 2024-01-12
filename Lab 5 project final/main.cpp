// main.cpp

#include <iostream>
#include "savingsaccount.h"

using namespace std;

int main() {
    SavingsAccount saver1(2000.00);
    SavingsAccount saver2(3000.00);

    // Set the annual interest rate to 3 percent
    SavingsAccount::modifyInterestRate(0.03);

    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();

    cout << "Saver 1 Balance after 1 month: $" << saver1.getBalance() << endl;
    cout << "Saver 2 Balance after 1 month: $" << saver2.getBalance() << endl;

    // Set the annual interest rate to 4 percent
    SavingsAccount::modifyInterestRate(0.04);

    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();

    cout << "Saver 1 Balance after 2 months: $" << saver1.getBalance() << endl;
    cout << "Saver 2 Balance after 2 months: $" << saver2.getBalance() << endl;

    return 0;
}
