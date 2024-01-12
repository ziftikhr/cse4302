#include <iostream>

class Counter {
private:
    int count;
    int incrementStep;

public:
    // Constructor
    Counter(int step_val = 1) {
        if (step_val < 1) {
            incrementStep = 1;
        } else {
            incrementStep = step_val;
        }
        count = 0;
    }

    // Public member functions
    void setIncrementStep(int step_val) {
        if (step_val > 0) {
            incrementStep = step_val;
        }
    }

    int getCount() const {
        return count;
    }

    void increment() {
        count += incrementStep;
    }

    void resetCount() {
        count = 0;
    }

    // Overloaded operators
    Counter operator+(const Counter& other) const {
        Counter result;
        result.count = count + other.count;
        result.incrementStep = (incrementStep > other.incrementStep) ? incrementStep : other.incrementStep;
        return result;
    }

    bool operator==(const Counter& other) const {
        return count == other.count;
    }

    bool operator!=(const Counter& other) const {
        return !(*this == other);
    }

    bool operator>(const Counter& other) const {
        return count > other.count;
    }
        bool operator<(const Counter& other) const {
        return count < other.count;
    }

    bool operator>=(const Counter& other) const {
        return !(*this < other);
    }

    bool operator<=(const Counter& other) const {
        return !(*this > other);
    }

    Counter& operator+=(const Counter& other) {
        count += other.count;
        incrementStep = (incrementStep > other.incrementStep) ? incrementStep : other.incrementStep;
        return *this;
    }

    Counter operator++(int) {
        Counter temp(incrementStep);
        count += incrementStep;
        return temp;
    }

    Counter& operator++() {
        count += incrementStep;
        return *this;
    }
};

void testFunction(const Counter& c) {
    std::cout << c.getCount() << std::endl;
}

int main() {
    Counter c1(2);
    Counter c2(3);
    Counter c3(4);

    c1 = c2 + c3;
    testFunction(c1);

    if (c1 == c2) {
        std::cout << "c1 is equal to c2" << std::endl;
    }

    c1 += c2;
    testFunction(c1);

    Counter c4 = c2++;
    testFunction(c2);
    testFunction(c4);

    Counter c5 = ++c3;
    testFunction(c3);
    testFunction(c5);

    return 0;
}

