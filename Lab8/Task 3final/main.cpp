#include <iostream>
#include "Employee.h"

using namespace std;

int main() {
    Address present("Blooming Dale", "Banani", "Dhaka", 1213, "Dhaka", "Bangladesh");
    Address permanent("Thana", "Bisic", "Tangail", 1307, "Dhaka", "BD");
    ContactInformation personalContact(01, 01, "Zz@gmail.com");
    ContactInformation emergencyContact(34, 24, "iz@gmail.com");

    Employee employee("Anony", "007", 500, true, present, permanent, personalContact, emergencyContact);

    cout << "Employee Name: " << employee.getName() << endl;
    cout << "Employee Present Address: " << employee.getPresentAddress().getHouse() << ", " << employee.getPresentAddress().getCity() << ", " << employee.getPresentAddress().getCountry() << endl;
    cout << "Employee Permanent Address: " << employee.getPermanentAddress().getHouse() << ", " << employee.getPermanentAddress().getCity() << ", " << employee.getPermanentAddress().getCountry() << endl;
    cout << "Employee Personal Email: " << employee.getPersonalContact().getEmail() << endl;

    return 0;
}
