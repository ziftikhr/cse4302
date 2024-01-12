#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

class StudentCollection {
private:
    string names[10];
    double grades[10];
    int count;

public:
    StudentCollection() : count(0) {}

    double& operator[](const string& name) {
        for (int i = 0; i < count; i++) {
            if (names[i] == name) {
                return grades[i];
            }
        }
        throw runtime_error("Student not found");
    }

    void setGrade(const string& name, double newGrade) {
        for (int i = 0; i < count; i++) {
            if (names[i] == name) {
                grades[i] = newGrade;
                return;
            }
        }
        throw runtime_error("Student not found");
    }

    void addStudent(const string& name, double grade) {
        if (count >= 10) {
            throw runtime_error("Collection is full");
        }
        names[count] = name;
        grades[count] = grade;
        count++;
    }
};

int main() {
    StudentCollection collection;

    // Add students
    collection.addStudent("Alice", 90.5);
    collection.addStudent("Bob", 85.0);
    collection.addStudent("Charlie", 78.2);

    // Access and print student grades
    cout << "Alice's grade: " << collection["Alice"] << endl;
    cout << "Bob's grade: " << collection["Bob"] << endl;
    cout << "Charlie's grade: " << collection["Charlie"] << endl;

    // Update student grades
    collection.setGrade("Alice", 95.0);
    collection.setGrade("Bob", 88.5);

    // Access and print updated student grades
    cout << "Updated Alice's grade: " << collection["Alice"] << endl;
    cout << "Updated Bob's grade: " << collection["Bob"] << endl;

    // Try adding more students (this will throw an exception if the collection is full)
    try {
        collection.addStudent("David", 92.3);
        collection.addStudent("Eva", 76.9);
    } catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
