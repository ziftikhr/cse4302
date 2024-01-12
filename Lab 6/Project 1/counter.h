#ifndef COUNTER_H
#define COUNTER_H

class Counter {
private:
    int count;
    int incrementStep;

public:
    Counter(int step_val = 1);

    void setIncrementStep(int step_val);

    int getCount() const;

    void increment();

    void resetCount();

    Counter operator+(const Counter& other) const;

    bool operator>(const Counter& other) const;

    bool operator<(const Counter& other) const;

    bool operator>=(const Counter& other) const;

    bool operator<=(const Counter& other) const;

    bool operator==(const Counter& other) const;

    bool operator!=(const Counter& other) const;

    Counter& operator+=(const Counter& other);

    Counter operator++(int);

    Counter& operator++();
};

#endif  // COUNTER_H
