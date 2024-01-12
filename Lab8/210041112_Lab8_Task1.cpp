#include <string>
#include <iostream>
using namespace std;

class Account
{
private:
    string accountNo;
    string accountName;
    float balance;

public:
    Account(string name, float bal)
    {
        accountName = name;
        balance = bal;
    }
    string getAccountNo()
    {
        return accountNo;
    }
    void setAccountNo(string no)
    {
        accountNo = no;
    }
    string getAccountName()
    {
        return accountName;
    }
    void setAccountName(string nm)
    {
        accountName = nm;
    }
    float getBalance()
    {
        return balance;
    }
    void setBalance(float bal)
    {
        balance = bal;
    }
};

class CurrentAccount : public Account
{
private:
    const static int serviceCharge = 100;
    const static int accountPrefix = 100;
    static int nextAccount;

public:
    CurrentAccount(string acctName, float bal) : Account(acctName, bal)
    {
        nextAccountNo();
        nextAccount++;
    }
    const static int getServiceCharge()
    {
        return serviceCharge;
    }
    const static int getAccountPrefix()
    {
        return accountPrefix;
    }

    void nextAccountNo()
    {
        setAccountNo(to_string(accountPrefix) + to_string(nextAccount));
    }
};

class SavingsAccount : public Account
{
private:
    float interestRate;
    float monthlyDepositAmount;
    const static int accountPrefix = 200;
    static int nextAccount;

public:
    SavingsAccount(string acctName, float bal, float intRate, float mda) : Account(acctName, bal)
    {
        nextAccountNo();
        nextAccount++;
        interestRate = intRate;
        monthlyDepositAmount = mda;
    }
    float getInterestRate()
    {
        return interestRate;
    }
    float getMonthlyDepositAmount()
    {
        return monthlyDepositAmount;
    }
    const static int getAccountPrefix()
    {
        return accountPrefix;
    }
    void nextAccountNo()
    {
        setAccountNo(to_string(accountPrefix) + to_string(nextAccount));
    }
};

class MonthlyDepositScheme : public Account
{
private:
    float interestRate;
    float monthlyDepositAmount;
    const static int accountPrefix = 300;
    static int nextAccount;

public:
    MonthlyDepositScheme(string acctName, float bal, float intRate, float mda) : Account(acctName, bal)
    {
        nextAccountNo();
        nextAccount++;
        interestRate = intRate;
        monthlyDepositAmount = mda;
    }

    float getInterestRate()
    {
        return interestRate;
    }
    float getMonthlyDepositAmount()
    {
        return monthlyDepositAmount;
    }
    void nextAccountNo()
    {
        setAccountNo(to_string(accountPrefix) + to_string(nextAccount));
    }
};

class LoanAccount : public Account
{
private:
    float interestRate;
    float monthlyDepositAmount;
    const static int accountPrefix = 900;
    static int nextAccount;

public:
    LoanAccount(string acctName, float bal, float intRate, float mda) : Account(acctName, bal)
    {
        nextAccountNo();
        nextAccount++;
        interestRate = intRate;
        monthlyDepositAmount = mda;
    }
    void nextAccountNo()
    {
        setAccountNo(to_string(accountPrefix) + to_string(nextAccount));
    }
};

class TwoYearMDS:public MonthlyDepositScheme
{
    private:
    float maximumInterest;

    public:

    TwoYearMDS(string acctName,float bal,float intRate,float mda,float maxInt):MonthlyDepositScheme(acctName,bal,intRate,mda)
    {
        maximumInterest=maxInt;
    }
    float getMaximumInterest()
    {
        return maximumInterest;
    }
    void setMaximumInterest(float inter)
    {
        maximumInterest=inter;
    }
    void description()
    {
        cout << "Two Year Monthly Deposit Scheme-Deposit fixed amount each month for 2 years" << endl;
    }

};
class FiveYearMDS:public MonthlyDepositScheme
{
    private:
    float maximumInterest;

    public:
    FiveYearMDS(string acctName,float bal,float intRate,float mda,float maxInt):MonthlyDepositScheme(acctName,bal,intRate,mda)
    {
        maximumInterest=maxInt;
    }
    float getMaximumInterest()
    {
        return maximumInterest;
    }
    void setMaximumInterest(float inter)
    {
        maximumInterest=inter;
    }

    void description()
    {
        cout << "Five Year Monthly Deposit Scheme-Deposit fixed amount each month for 5 years" << endl;
    }
};
class InitialDepositMDS:public MonthlyDepositScheme
{
    private:
    float maximumInterest;
    float initialDepositAmount;

    public:

    InitialDepositMDS(string acctName,float bal,float intRate,float mda,float maxInt,float intDepo):MonthlyDepositScheme(acctName,bal,intRate,mda)
    {
        maximumInterest=maxInt;
        initialDepositAmount=intDepo;
    }
    float getMaximumInterest()
    {
        return maximumInterest;
    }
    void setMaximumInterest(float inter)
    {
        maximumInterest=inter;
    }
    float getInitialDepositAmount()
    {
        return initialDepositAmount;
    }
    void setInitialDepositAmount(float val)
    {
        initialDepositAmount=val;
    }
    void description()
    {
        cout << "Monthly Deposit Scheme-Deposit fixed initial amount each month " << endl;
    }
};

int CurrentAccount::nextAccount = 1;
int SavingsAccount::nextAccount = 2;
int MonthlyDepositScheme::nextAccount = 3;
int LoanAccount::nextAccount = 4;

int main()
{
    CurrentAccount obj1("A",2000.0);
    cout << "Current Account Number : " << obj1.getAccountNo()  << endl;
    SavingsAccount obj2("B",5000.0,12,100.0);
    cout << "Savings Account Number : " << obj2.getAccountNo()  << endl;
    MonthlyDepositScheme obj3("C",600.0,13,200.0);
    cout << "Monthly deposit Account Number : " << obj3.getAccountNo()  << endl;
    LoanAccount obj4("D",4567.0,10,300);
    cout << "Monthly deposit Account Number : " << obj4.getAccountNo()  << endl;
    return 0;
}
