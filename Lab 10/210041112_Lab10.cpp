#include <iostream>
#include <string>

using namespace std;

class Product {
private:

    static int ProductCount;

public:
    string title;
    string authorOrDirector;
    int id;
    Product(const string& title, const string& authorOrDirector, int id)
        : title(title), authorOrDirector(authorOrDirector), id(id) {
        ProductCount++;
    }

    Product(const Product& other)
        : title(other.title), authorOrDirector(other.authorOrDirector), id(other.id) {
        ProductCount++;
    }

    virtual void displayInfo() const = 0;

    static int getProductsCount() {
        return ProductCount;
    }

    bool operator<(const Product &rhs)const{
        return id<rhs.id;
    }

};

int Product::ProductCount = 0;

class Book : public Product {
public:
    Book(const string& title, const string& author, int id)
        : Product(title, author, id) {}

    void displayInfo() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << authorOrDirector << endl;
        cout << "Book ID: " << id << endl;
    }
};

class DVD: public Product{
public:
     DVD(const string& title, const string& director, int id)
      : Product(title, director, id) {}  

     void displayInfo() const {
        cout << "Title: " << title << endl;
        cout << "DIrector: " << authorOrDirector << endl;
        cout << "DVD ID: " << id << endl;
    }
};

int main(){
    Product *p[5];
    p[0]=new Book("B_A","Mr.X",11);
    p[1]=new Book("B_B","Mr.Y",2);
    p[2]=new DVD("D_A","Mr.Z",101);
    p[3]=new DVD("D_B","Mr.W",102);
    //p[4]=new Book("B_C","Mr.V",3);
    p[4]=p[0];

    //assignment operator
    Book b1("Book A","Mr.a",22);
    Book assignedBook("Book C", "Mr.ABC", 13);
    assignedBook=b1;

    for(int i=0;i<5;i++){
        p[i]->displayInfo();
        cout<<endl;
    }
    assignedBook.displayInfo();
    cout<<endl;
    //b1.displayInfo();

    cout<<"Total no. of Products:"<<Product::getProductsCount()<<endl;

    if(*p[0]<*p[1]){
        cout<<"First product is less than second product."<<endl;
    }
    else{
        cout<<"First product is not less than the second product."<<endl;
    }
}