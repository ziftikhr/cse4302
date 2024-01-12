#include <iostream>
using namespace std;

class CurrencyDollar {
private:
    int dollars;
    int cents;

public:
    CurrencyDollar(){
        dollars = 0;
        cents = 0;
    }

    CurrencyDollar(int d, int c) {
        dollars = d;
        cents = c;
    }

    void display() {
        cout << "USD:" << dollars << "." << cents << endl;
    }
};

class CurrencyEuro {
private:
    int euros;
    int cents;

public:
    CurrencyEuro() {
        euros = 0;
        cents = 0;
    }

    CurrencyEuro(int e, int c) {
        euros = e;
        cents = c;
    }

    void display() {
        cout << "Euro: " << euros << "." << cents << endl;
    }
};

class CurrencyBDT {
private:
    int taka;
    int poisha;

public:
    CurrencyBDT() {
        taka = 0;
        poisha = 0;
    }

    CurrencyBDT(int t, int p) {
        taka = t;
        poisha = p;
    }

    operator CurrencyDollar() const;
    operator CurrencyEuro() const;
};

CurrencyBDT::operator CurrencyDollar() const {
    double usd = (taka + (poisha * 0.01)) * 0.0091;
    int dollars = usd;
    int cents = ((usd - dollars) * 100);
    return CurrencyDollar(dollars, cents);
}

CurrencyBDT::operator CurrencyEuro() const {
    double euro = (taka + (poisha * 0.01)) * 0.0085;
    int euros = (euro);
    int cents = ((euro - euros) * 100);
    return CurrencyEuro(euros, cents);
}

int main() {
    CurrencyBDT bdt(1000, 50);

    CurrencyDollar u1 = bdt;
    CurrencyEuro u2 = bdt;

    cout << "Equivalent in Dollars: ";
    u1.display();
    cout << "Equivalent in Euros: ";
    u2.display();

    return 0;
}

