
#include <iostream>
#include "Weight.h"
using namespace std;

int main() {
    Weight w1(5.0);
    cout << "Weight in pound-ounce: ";
    w1.showWeight();

    double kgValue1 = w1;
    cout << "Weight in KG: " << kgValue1 << " kg" << endl;

    Weight w2(10, 8.5);
    cout << "Weight in pound-ounce: ";
    w2.showWeight();

    double kgValue2 = w2;
    cout << "Weight in KG: " << kgValue2 << " kg" << endl;

    return 0;
}
