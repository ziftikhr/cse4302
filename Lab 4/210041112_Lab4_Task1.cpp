#include<iostream>
using namespace std;

class Calculator{
    private:
    int currval;
    public:
    Calculator() : currval(0) {}
    Calculator(int val){
    }

    int getValue(){
        return currval;
    }
    void setValue(int val){
        currval=val;
    }
    void add (int Value){
        currval += Value;
    }
    void subtract(int Value){
        currval -= Value;
    }
    void multiply(int Value){
        currval *= Value;
    }
      void divideBy(int Value) {
              if (Value != 0) {
            currval /= Value;
        } else {
            cout << "divide by 0 is undefined." << endl;
        }
    }
    void clear(){
        currval = 0;
    }
    void display(){
        cout <<"Calculator display:"<<" "<< currval << endl;
    }
     ~Calculator() {
        cout << "Calculator object destroyed." << endl;
    }
};

int main(){
    Calculator c1;
    c1.add(10);
    c1.display();
    c1.add(7);
    c1.display();
    c1.multiply(31);
    c1.display();
    c1.subtract(42);
    c1.display();
    c1.divideBy(7);
    c1.display();
    c1.divideBy(0);
    c1.display();
    c1.add(3);
    c1.display();
    c1.subtract(1);
    c1.display();
    c1.clear();
    c1.display();
    return 0;
}