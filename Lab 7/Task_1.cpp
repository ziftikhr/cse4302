#include <iostream>
using namespace std;

class madafa {
private:
    static int num;
    int n1;

public:
    madafa(){
        n1=0;
        num++;
    }
    madafa(int num) : n1(num) { }

    void set_name(int num) {
        n1 = num;
    }

//    void show_num() {
//        cout << n1;
//    }

    madafa operator+(const madafa& rhs) {
        madafa result(n1 + rhs.n1);
//       madafaka result;
//       result=n1+rhs.n1;
        return result;
        }
//     friend madafa operator+(const madafa& lhs, const madafa& rhs);

     friend madafa operator-(const madafa& lhs, const madafa& rhs);

     friend madafa operator*(const madafa& lhs, const madafa& rhs);

     friend ostream &operator<<( ostream &output, const madafa &lhs ) {
         output <<lhs.n1;
         return output;
      }

      bool operator>(const madafa &rhs) const {
         return n1>rhs.n1;
      }
      madafa& operator+=(const madafa& rhs) {
        madafa result(n1 += rhs.n1);
        return result;
    }

        madafa& operator++() { // Prefix increment operator
        ++n1;
        return *this;
    }

    madafa operator++(int) { // Postfix increment operator
        madafa tmp(*this); // Create a copy of the current object
        ++n1; // Increment the current object
        return tmp; // Return the copy (the original value)
    }
    static int get_t(){
        return num;
    }

};
//madafa operator+(const madafa& lhs, const madafa& rhs) {
//    return madafa(lhs.n1 + rhs.n1);
//}
int madafa::num=0;
madafa operator-(const madafa& lhs, const madafa& rhs) {
    return madafa(lhs.n1 - rhs.n1);
}
madafa operator*( const madafa& lhs, const madafa& rhs) {
    return madafa(lhs.n1 * rhs.n1);
}

int main() {
    madafa o1(4), o2(3), o3, o4,o5,o6(9),o7,o8,o9;
    o3 = o1 + o2;
    o4 = o1 - o2;
    o5 = o1 > o2;
    o1+=o6;
    o7=o2++;
    cout<<o3<<endl;
    cout<<o4<<endl;
    cout<<o5<<endl;
    cout<<o1<<endl;
    cout<<o7<<endl;
    int totalInstances = madafa::get_t();
    cout << "Total instances of madafa: " << totalInstances << endl;
    return 0;
}
