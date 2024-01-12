#include <iostream>
#include<bits/stdc++.h>
#include <string>
using namespace std;
class Car {
private:
    std::string model_name;
    int batch_number;
    std::string color;
    static int serial_number;
public:
    Car() {
        model_name = "";
        batch_number =0;
        color = "";
        serial_number++;
    }

    void setModelName() {
        string name;
        cin>>name;
        model_name = name;
    }

    void setBatchNumber() {
        int batch;
        cin>>batch;
        batch_number = batch;
    }

    void setColor() {
        string clr;
        cin>>clr;
        color=clr;
    }

    string getModelName() const {
        return model_name;
    }

    int getBatchNumber() const {
        return batch_number;
    }

    string getColor() const {
        return color;
    }

    static int getTotalCarCount() {
        return serial_number;
    }
};

int Car::serial_number = 0;
bool compareByBatchNumber(const Car& car1, const Car& car2) {
    return car1.getBatchNumber()> car2.getBatchNumber();
}
int main() {
    const int size=3;
    Car carArray[size];


    for (int i = 0; i < size; i++) {
        //carArray[i] = new Car();
    carArray[i].setModelName();
    carArray[i].setBatchNumber();
    carArray[i].setColor();
    }



//for (int i = 0; i < size - 1; i++) {
//        for (int j = 0; j < size - i - 1; j++) {
//            if (compareByBatchNumber(carArray[j], carArray[j + 1])) {
//                Car temp = carArray[j];
//                carArray[j] = carArray[j + 1];
//                carArray[j + 1] = temp;
//            }
//        }
//    }
    sort(carArray, carArray + size, compareByBatchNumber);

    // Get and display car attributes and total count
    for (int i = 0; i < size; i++) {
            std::cout << "Car " << i + 1 << " - Model: " << carArray[i].getModelName()
                      << ", Batch: " << carArray[i].getBatchNumber()
                      << ", Color: " << carArray[i].getColor() << endl;


    }
            cout << ", Serial Number: " << Car::getTotalCarCount();

    return 0;
}
