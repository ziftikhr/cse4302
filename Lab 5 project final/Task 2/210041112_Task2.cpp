#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class student{
    private:
    string name;
    string dob;
    int id;
    float cgpa;
    public:
    // Constructor Initializer
    student(){
        name="";
        dob="";
        id=0;
        cgpa=0;
    }
    void get_name(){
        string s_name;
        getline(cin,s_name);
        name=s_name;
    }
    string set_name(){
        return name;
    }
    void get_dob(){
        string s_dob;
        getline(cin,s_dob);
        dob = s_dob;
    }
    string set_dob(){
        return dob;
    }
    void get_id(){
        int s_id;
        cin>>s_id;
        id=s_id;
    }
    int set_id(){
        return id;
    }
    void get_cgpa(){
        float s_cgpa;
        cin >> s_cgpa ;
        cgpa=s_cgpa;
    }
    float set_cgpa(){
        return  cgpa;
    }
};

int main(){
    student s;
    s.get_name();
    s.get_dob();
    s.get_id();
    s.get_cgpa();
    cout << s.set_name() << endl;
    cout << s.set_dob() << endl;
    cout << s.set_id() << endl;
    cout << s.set_cgpa() << endl;
}






