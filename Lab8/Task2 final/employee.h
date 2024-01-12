#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;
class Employee {
private:
    string name;
    string emp_id;
    float monthly_salary;
    bool onDuty;

public:
    Employee(string n, string e_id, float m_salary, bool oDuty);
    string getName() const;
    string getEmpID() const;
    float getMonthlySalary() const;
    bool isOnDuty() const;
    float yearlyIncome() const;
};

class Manager : public Employee {
public:
    Manager(string name, string emp_id, bool onDuty);
};

class Engineer : public Employee {
public:
    Engineer(string name, string emp_id, bool onDuty);
};

class Designer : public Employee {
public:
    Designer(string name, string emp_id, bool onDuty);
};

#endif
