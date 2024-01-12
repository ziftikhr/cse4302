#include "Employee.h"

Employee::Employee(string name, string emp_id, float monthly_salary, bool onDuty, Address presentAddress, Address permanentAddress, ContactInformation personalContact, ContactInformation emergencyContact)
    : name(name), emp_id(emp_id), monthly_salary(monthly_salary), onDuty(onDuty),
      presentAddress(presentAddress), permanentAddress(permanentAddress),
      personalContact(personalContact), emergencyContact(emergencyContact) {}

string Employee::getName() {
    return name;
}

string Employee::getEmpId() {
    return emp_id;
}

float Employee::getMonthlySalary() {
    return monthly_salary;
}

bool Employee::getOnDuty() {
    return onDuty;
}

float Employee::yearlyIncome() {
    return monthly_salary * 12;
}

Address Employee::getPresentAddress() {
    return presentAddress;
}

Address Employee::getPermanentAddress() {
    return permanentAddress;
}

ContactInformation Employee::getPersonalContact() {
    return personalContact;
}

ContactInformation Employee::getEmergencyContact() {
    return emergencyContact;
}
