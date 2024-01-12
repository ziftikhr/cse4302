// savingsaccount.h

#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

class SavingsAccount {
private:
    double savingsBalance; // Private data member to store the balance
    static double annualInterestRate; // Static data member for annual interest rate

public:
    SavingsAccount(double balance); // Constructor
    void calculateMonthlyInterest(); // Member function to calculate monthly interest
    static void modifyInterestRate(double newRate); // Static member function to modify interest rate
    double getBalance() const; // Getter for balance
    static double getAnnualInterestRate(); // Getter for annual interest rate
};

#endif // SAVINGSACCOUNT_H
