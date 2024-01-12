#include "counter.h"
#include <algorithm>

Counter::Counter(int step_val) {
    if (step_val <= 0) {
        incrementStep = 1;
    } else {
        incrementStep = step_val;
    }
    count=0;
}

void Counter::setIncrementStep(int step_val) {
    if (step_val > 0) {
        incrementStep = step_val;
    }
}

int Counter::getCount() const {
    return count;
}

void Counter::increment() {
    count += incrementStep;
}

void Counter::resetCount() {
    count = 0;
}

Counter Counter::operator+(const Counter& other) const {
    Counter result(std::max(incrementStep, other.incrementStep));
    result.count = count + other.count;
    return result;
}

bool Counter::operator>(const Counter& other) const {
    return count > other.count;
}

bool Counter::operator<(const Counter& other) const {
    return count < other.count;
}

bool Counter::operator>=(const Counter& other) const {
    return count >= other.count;
}

bool Counter::operator<=(const Counter& other) const {
    return count <= other.count;
}

bool Counter::operator==(const Counter& other) const {
    return count == other.count;
}

bool Counter::operator!=(const Counter& other) const {
    return count != other.count;
}

Counter Counter::operator++(int) {
    Counter temp(*this);
    count += incrementStep;
    return temp;
}

Counter& Counter::operator++() {
    count += incrementStep;
    return *this;
}
