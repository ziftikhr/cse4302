#include <iostream>
#include <string>
using namespace std;

class Address {
private:
    string house;
    string road;
    string city;
    int zipCode;
    string district;
    string country;

public:
    Address(string house, string road, string city, int zipCode, string district, string country)
        : house(house), road(road), city(city), zipCode(zipCode), district(district), country(country) {}

    string getHouse() {
        return house;
    }

    string getRoad() {
        return road;
    }

    string getCity() {
        return city;
    }

    int getZipCode() {
        return zipCode;
    }

    string getDistrict() {
        return district;
    }

    string getCountry() {
        return country;
    }
};

class ContactInformation {
private:
    int primaryPhoneNumber;
    int secondaryPhoneNumber;
    string email;

public:
    ContactInformation(int primaryPhoneNumber, int secondaryPhoneNumber, string email)
        : primaryPhoneNumber(primaryPhoneNumber), secondaryPhoneNumber(secondaryPhoneNumber), email(email) {}

    int getPrimaryPhoneNumber() {
        return primaryPhoneNumber;
    }

    int getSecondaryPhoneNumber() {
        return secondaryPhoneNumber;
    }

    string getEmail() {
        return email;
    }
};

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
    Employee(string name, string emp_id, float monthly_salary, bool onDuty, Address presentAddress, Address permanentAddress, ContactInformation personalContact, ContactInformation emergencyContact)
        : name(name), emp_id(emp_id), monthly_salary(monthly_salary), onDuty(onDuty),
          presentAddress(presentAddress), permanentAddress(permanentAddress),
          personalContact(personalContact), emergencyContact(emergencyContact) {}

    std::string getName() {
        return name;
    }

    std::string getEmpId() {
        return emp_id;
    }

    float getMonthlySalary() {
        return monthly_salary;
    }

    bool getOnDuty() {
        return onDuty;
    }

    float yearlyIncome() {
        return monthly_salary * 12;
    }

    Address getPresentAddress() {
        return presentAddress;
    }

    Address getPermanentAddress() {
        return permanentAddress;
    }

    ContactInformation getPersonalContact() {
        return personalContact;
    }

    ContactInformation getEmergencyContact() {
        return emergencyContact;
    }
};

int main() {
    Address present("Blooming Dale", "Banani", "Dhaka", 1213, "Dhaka", "Bangladesh");
    Address permanent("Thana", "Bisic", "Tangail", 1307, "Dhaka", "BD");
    ContactInformation personalContact(01, 01, "Zz@gmail.com");
    ContactInformation emergencyContact(34, 24, "iz@gmail.com");

    Employee employee("Anony", "007", 500, true, present, permanent, personalContact, emergencyContact);

    cout << "Employee Name: " << employee.getName() << endl;
    cout << "Employee Present Address: " << employee.getPresentAddress().getHouse() << ", " << employee.getPresentAddress().getCity() << ", " << employee.getPresentAddress().getCountry() << endl;
    cout << "Employee Permanent Address: " << employee.getPermanentAddress().getHouse() << ", " << employee.getPermanentAddress().getCity() << ", " << employee.getPermanentAddress().getCountry() <<endl;
    cout << "Employee Personal Email: " << employee.getPersonalContact().getEmail() << endl;

    return 0;
}
