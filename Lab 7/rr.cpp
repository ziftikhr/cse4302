#include <iostream>
#include <string>
#include <stdexcept>

class StudentCollection {
public:
    StudentCollection() : count(0) {}

    double& operator[](const std::string& name) {
        for (int i = 0; i < count; i++) {
            if (names[i] == name) {
                return grades[i];
            }
        }
        throw std::runtime_error("Student not found");
    }

    void operator[](const std::string& name, double newGrade) {
        for (int i = 0; i < count; i++) {
            if (names[i] == name) {
                grades[i] = newGrade;
                return;
            }
        }
        throw std::runtime_error("Student not found");
    }

    void addStudent(const std::string& name, double grade) {
        if (count >= 10) {
            throw std::runtime_error("Collection is full");
        }
        names[count] = name;
        grades[count] = grade;
        count++;
    }

private:
    std::string names[10];
    double grades[10];
    int count;
};

int main() {
    StudentCollection collection;

    // Add students
    collection.addStudent("Alice", 90.5);
    collection.addStudent("Bob", 85.0);
    collection.addStudent("Charlie", 78.2);

    // Access and print student grades
    std::cout << "Alice's grade: " << collection["Alice"] << std::endl;
    std::cout << "Bob's grade: " << collection["Bob"] << std::endl;
    std::cout << "Charlie's grade: " << collection["Charlie"] << std::endl;

    // Update student grades
    collection["Alice"] = 95.0;
    collection["Bob"] = 88.5;

    // Access and print updated student grades
    std::cout << "Updated Alice's grade: " << collection["Alice"] << std::endl;
    std::cout << "Updated Bob's grade: " << collection["Bob"] << std::endl;

    // Try adding more students (this will throw an exception)
    try {
        collection.addStudent("David", 92.3);
        collection.addStudent("Eva", 76.9);
    } catch (const std::runtime_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
