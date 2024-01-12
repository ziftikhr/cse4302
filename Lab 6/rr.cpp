#include <iostream>

class ZooAnimal {
private:
    std::string nameOfAnimal;
    int birthYear;
    int cageNumber;
    float weightData;
    int height;

public:
    // Constructor
    ZooAnimal(const std::string& name, int birthYear, int cageNumber, float weight, int height)
        : nameOfAnimal(name), birthYear(birthYear), cageNumber(cageNumber), weightData(weight), height(height) {}

    // Overloaded comparison operators for weightData
    bool operator>(const ZooAnimal& other) const {
        return weightData > other.weightData;
    }

    bool operator<(const ZooAnimal& other) const {
        return weightData < other.weightData;
    }

    bool operator>=(const ZooAnimal& other) const {
        return weightData >= other.weightData;
    }

    bool operator<=(const ZooAnimal& other) const {
        return weightData <= other.weightData;
    }

    bool operator==(const ZooAnimal& other) const {
        return weightData == other.weightData;
    }

    bool operator!=(const ZooAnimal& other) const {
        return weightData != other.weightData;
    }

    // Overloaded += operator to increase weightData
    ZooAnimal& operator+=(int amount) {
        weightData += static_cast<float>(amount);
        return *this;
    }

    // Overloaded -= operator to decrease weightData
    ZooAnimal& operator-=(int amount) {
        weightData -= static_cast<float>(amount);
        return *this;
    }

    // Getter for nameOfAnimal
    std::string getNameOfAnimal() const {
        return nameOfAnimal;
    }

    // Getter for birthYear
    int getBirthYear() const {
        return birthYear;
    }

    // Getter for cageNumber
    int getCageNumber() const {
        return cageNumber;
    }

    // Getter for weightData
    float getWeightData() const {
        return weightData;
    }

    // Getter for height
    int getHeight() const {
        return height;
    }
};

int main() {
    ZooAnimal lion("Lion", 2015, 10, 150.5, 120);
    ZooAnimal elephant("Elephant", 2010, 5, 5000.0, 300);

    std::cout << "Lion's weight: " << lion.getWeightData() << " kg" << std::endl;
    std::cout << "Elephant's weight: " << elephant.getWeightData() << " kg" << std::endl;

    // Using comparison operators
    if (lion > elephant) {
        std::cout << "The lion is heavier than the elephant." << std::endl;
    } else {
        std::cout << "The lion is not heavier than the elephant." << std::endl;
    }

    // Using += operator
    lion += 50;
    std::cout << "Lion's new weight after += operator: " << lion.getWeightData() << " kg" << std::endl;

    // Using -= operator
    elephant -= 1000;
    std::cout << "Elephant's new weight after -= operator: " << elephant.getWeightData() << " kg" << std::endl;

    return 0;
}
