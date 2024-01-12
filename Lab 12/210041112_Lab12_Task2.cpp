#include <iostream>
#include <cstring>

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
            cerr << "Stack is empty. Cannot pop." << endl;
            exit(EXIT_FAILURE);
        }
        return elements[top--];
    }

    T peek() const {
        if (top == -1) {
            cerr << "Stack is empty. Cannot peek." << endl;
            exit(EXIT_FAILURE);
        }
        return elements[top];
    }
};

int main() {
    my_stack<int, 3> intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    cout << intStack.peek() << endl;
    cout <<  intStack.pop() << endl;
    cout <<  intStack.peek() << endl;

    my_stack<string, 3> stringStack;
    stringStack.push("ABC");
    stringStack.push("abc");
    stringStack.push("xyz");

    cout  << stringStack.peek() << endl;
    cout  << stringStack.pop() << endl;
    cout << stringStack.peek() << endl;
    cout  << stringStack.pop() << endl;
    cout  << stringStack.pop() << endl;
    cout  << stringStack.pop() << endl;

    return 0;
}
