#include <iostream>
#include <cstring>
#include <stdexcept>

using namespace std;

template <class T, int MAX_SIZE>
class my_stack {
private:
    T elements[MAX_SIZE];
    int top;

public:
    my_stack() : top(-1) {}

    void push(const T &obj) {
        if (top == MAX_SIZE - 1) {
            cerr << "Stack is full. Cannot push." << endl;
            exit(EXIT_FAILURE);
        }
        elements[++top] = obj;
    }

    T pop() {
        if (top == -1) {
            throw out_of_range("Stack is empty. Cannot pop.");
        }
        return elements[top--];
    }

    T peek() const {
        if (top == -1) {
            throw out_of_range("Stack is empty. Cannot peek.");
        }
        return elements[top];
    }
};

int main() {
    my_stack<int, 3> intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    try {
        cout << intStack.peek() << endl;
        cout << intStack.pop() << endl;
        cout << intStack.peek() << endl;
        cout << intStack.pop() << endl;
        cout << intStack.pop() << endl; 
    } catch (const out_of_range& e) {
        cerr << "Exception: " << e.what() << endl;
    }

    my_stack<string, 3> stringStack;
    stringStack.push("ABC");
    stringStack.push("abc");
    stringStack.push("xyz");

    try {
        cout << stringStack.peek() << endl;
        cout << stringStack.pop() << endl;
        cout << stringStack.peek() << endl;
        cout << stringStack.pop() << endl;
        cout << stringStack.pop() << endl; 
    } catch (const out_of_range& e) {
        cerr << "Exception: " << e.what() << endl;
    }

    return 0;
}
