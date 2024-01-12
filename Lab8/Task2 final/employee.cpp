#include "employee.h"
using namespace std;

Employee::Employee(string n, string e_id, float m_salary, bool oDuty)
    : name(n), emp_id(e_id), monthly_salary(m_salary), onDuty(oDuty) {}

string Employee::getName() const {
    return name;
}

string Employee::getEmpID() const {
    return emp_id;
}

float Employee::getMonthlySalary() const {
    return monthly_salary;
}

bool Employee::isOnDuty() const {
    return onDuty;
}

float Employee::yearlyIncome() const {
    return monthly_salary * 12;
}

Manager::Manager(string name, string emp_id, bool onDuty)
    : Employee(name, emp_id, 10000, onDuty) {}

Engineer::Engineer(string name, string emp_id, bool onDuty)
    : Employee(name, emp_id, 8000, onDuty) {}

Designer::Designer(string name, string emp_id, bool onDuty)
    : Employee(name, emp_id, 7000, onDuty) {}
