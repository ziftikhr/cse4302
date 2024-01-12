#include<iostream>>

using namespace std;

class Weight{
private:
    const double kgToPound = 2.204;
    int pound;
    double ounce;
public:
    Weight(){
        pound=0;
        ounce=0.0;
    }
    Weight(double kg) {
        double totalPounds = kg * kgToPound;
        pound = totalPounds;
        ounce = (totalPounds - pound) * 16.0;
    }
    Weight(int p, double o){
        pound=p;
        ounce=o;
    }
    void showWeight() {
        cout << pound << "-" << ounce << " lbs" << endl;
    }
    operator double() const {
        double totalPounds = pound + (ounce / 16.0);
        return totalPounds / kgToPound;
    }
};

int main(){
    Weight weight1(5.0);
    cout << "Weight in pound-ounce:";
    weight1.showWeight();

    double kgValue1 = weight1;
    cout << "Weight in KG:" << kgValue1 << "kg" << endl;

    Weight weight2(10, 8.5);
    cout << "Weight in pound-ounce:";
    weight2.showWeight();

    double kgValue2 = weight2;
    cout << "Weight in KG:" << kgValue2 << "kg" << endl;

}
