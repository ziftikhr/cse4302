#include <iostream>
#include "counter.h"

using namespace std;

void testFunction(const Counter& c) {
    cout << c.getCount();
}

int main() {
    Counter c1(2);
    Counter c2(3);
    Counter c3(6);

    c1 = c2 + c3;
    cout << c1.getCount() << endl;

    c2 = c1++;
    cout << c1.getCount() << endl;
    cout << c2.getCount() << endl;

    testFunction(c1);
}
