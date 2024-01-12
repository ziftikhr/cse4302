// Weight.h
#ifndef WEIGHT_H
#define WEIGHT_H

class Weight {
private:
    const double kgToPound = 2.20462;
    int pound;
    double ounce;

public:
    Weight();
    Weight(double kg);
    Weight(int p, double o);
    void showWeight();
    operator double() const;
};

#endif
