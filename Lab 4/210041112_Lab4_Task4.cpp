#include <iostream>
#include <string>

using namespace std;

class ZooAnimal {
private:
    string nameOfAnimal;
    int birthYear;
    int cageNumber;
    float weight;
    int height;

public:
    ZooAnimal(string name = "", int year = 2023, int cage=0, float w=0, int h=1){
        nameOfAnimal=name;
        birthYear=year;
        cageNumber=cage;
        weight=w;
        height=h;
    }
       
    void setNameOfAnimal(const string &name) {
        nameOfAnimal = name;
    }

    string getNameOfAnimal(){
        return nameOfAnimal;
    }

    void setBirthYear(int year) {
        birthYear=year;
    }

    int getBirthYear(){
        return birthYear;
    }

    void setCageNumber(int cage) {
        cageNumber = cage;
    }

    int getCageNumber(){
        return cageNumber;
    }

    void setWeight(float w) {
        weight=w;
    }

    float getWeight(){
        return weight;
    }

    void setHeight(int h) {
        height=h;
    }

    int getHeight(){
        return height;
    }

    int getAge(){
        return 2023 - birthYear;
    }

    void displayInfo(){
        cout << "Name: " << nameOfAnimal << "\n";
        cout << "Birth Year: " << birthYear << "\n";
        cout << "Cage Number: " << cageNumber << "\n";
        cout << "Weight: " << weight << "\n";
        cout << "Height: " << height << "\n";
    }
    ~ZooAnimal() {
        cout << "Destructor called for " << nameOfAnimal << "\n";
    }
};

int main() {
    ZooAnimal lion("JJ", 2018, 3, 150.5, 100);
    lion.displayInfo();
    cout << "Age: " << lion.getAge() << " years\n";

    return 0;
}
