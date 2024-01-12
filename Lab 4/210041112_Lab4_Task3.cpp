#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolderName;
    string accountType;
    double currentBalance;
    double minimumBalance;

public:
    BankAccount(int accNumber, const string &accHolderName, const string &accType, double initialBalance, double minBalance){
       accountNumber=accNumber;
       accountHolderName = accHolderName;
       accountType = accType;
       currentBalance=initialBalance;
       minimumBalance=minBalance;
    }
    void ShowInfo() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Current Balance: " << currentBalance << endl;
        cout << "Minimum Balance: " << minimumBalance << endl;
    }

    void ShowBalance() {
        cout << "Current Balance: " << currentBalance << endl;
    }

    void Deposit(double amount) {
        if (amount > 0) {
            currentBalance += amount;
            cout << "Deposit successful. New balance: " << currentBalance << endl;
        } else {
            cout << "Invalid amount for deposit." << endl;
        }
    }

    void Withdrawal(double amount) {
        if (amount > 0 && (currentBalance - amount) >= minimumBalance) {
            currentBalance -= amount;
            cout << "Withdrawal successful. New balance: " << currentBalance << endl;
        } else {
            cout << "Invalid amount for withdrawal or insufficient balance."<< endl;
        }
    }

    void GiveInterest() {
        double interestRate=0.03;
        double interest = currentBalance * interestRate;
        double tax = interest * 0.1;
        currentBalance += (interest - tax);
        cout << "Interest deposited. New balance: " << currentBalance << endl;
    }

    ~BankAccount() {
        cout << "Account of " << accountHolderName << " with account no " << accountNumber << " is destroyed with a balance BDT " << currentBalance << endl;
    }
};

int main() {
    BankAccount acc1(12345, "Mr. X", "Savings", 5000, 1000);
    acc1.ShowInfo();
    acc1.Deposit(2000);
    acc1.Withdrawal(800);
    acc1.GiveInterest();


    return 0;
}
