
#include "Weight.h"
#include <iostream>
using namespace std;

Weight::Weight() {
    pound = 0;
    ounce = 0.0;
}

Weight::Weight(double kg) {
    double totalPounds = kg * kgToPound;
    pound = totalPounds;
    ounce = (totalPounds - pound) * 16.0;
}

Weight::Weight(int p, double o){
    pound = p;
    ounce = o;
}

void Weight::showWeight() {
     cout << pound << "-" << ounce << " lbs" << endl;
}

Weight::operator double() const {
    double totalPounds = pound + (ounce / 16.0);
    return totalPounds / kgToPound;
}
