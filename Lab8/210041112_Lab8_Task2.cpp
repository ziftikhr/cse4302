#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string name;
    string emp_id;
    float monthly_salary;
    bool onDuty;

public:
    Employee(string n, string e_id, float m_salary, bool oDuty)
        : name(n), emp_id(e_id), monthly_salary(m_salary), onDuty(oDuty) {}
    string getName() const
    {
        return name;
    }

    string getEmpID() const
    {
        return emp_id;
    }

    float getMonthlySalary() const
    {
        return monthly_salary;
    }

    bool isOnDuty() const
    {
        return onDuty;
    }

    float yearlyIncome() const
    {
        return monthly_salary * 12;
    }
};

class Manager : public Employee
{
public:
    Manager(string name, string emp_id, bool onDuty)
        : Employee(name, emp_id, 10000, onDuty) {}
};

class Engineer : public Employee
{
public:
    Engineer(string name, string emp_id, bool onDuty)
        : Employee(name, emp_id, 8000, onDuty) {}
};

class Designer : public Employee
{
public:
    Designer(string name, string emp_id, bool onDuty)
        : Employee(name, emp_id, 7000, onDuty) {}
};

int main()
{
    Manager m("A", "M999", true);
    Engineer e("B", "E091", true);
    Designer d("C", "D007", true);

    cout << m.yearlyIncome() << endl;
    cout << e.yearlyIncome() << endl;
    cout << d.yearlyIncome() << endl;

    return 0;
}
