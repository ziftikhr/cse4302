#include "employee.h"
#include <iostream>
using namespace std;

int main() {
    Manager m("A", "M001", true);
    Engineer e("B", "E001", true);
    Designer d("C", "D001", true);

    cout << m.yearlyIncome() << endl;
    cout << e.yearlyIncome() << endl;
    cout << d.yearlyIncome() << endl;

    return 0;
}
