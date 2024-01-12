#pragma once
#include <string>
#include "Address.h"
#include "ContactInformation.h"

using namespace std;

class Employee {
private:
    string name;
    string emp_id;
    float monthly_salary;
    bool onDuty;
    Address presentAddress;
    Address permanentAddress;
    ContactInformation personalContact;
    ContactInformation emergencyContact;

public:
    Employee(string name, string emp_id, float monthly_salary, bool onDuty, Address presentAddress, Address permanentAddress, ContactInformation personalContact, ContactInformation emergencyContact);
    string getName();
    string getEmpId();
    float getMonthlySalary();
    bool getOnDuty();
    float yearlyIncome();
    Address getPresentAddress();
    Address getPermanentAddress();
    ContactInformation getPersonalContact();
    ContactInformation getEmergencyContact();
};
