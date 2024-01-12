
#pragma once
#include <string>

using namespace std;

class Address {
private:
    string house;
    string road;
    string city;
    int zipCode;
    string district;
    string country;

public:
    Address(string house, string road, string city, int zipCode, string district, string country);
    string getHouse();
    string getRoad();
    string getCity();
    int getZipCode();
    string getDistrict();
    string getCountry();
};
