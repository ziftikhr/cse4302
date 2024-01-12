#include "Address.h"

Address::Address(string house, string road, string city, int zipCode, string district, string country)
    : house(house), road(road), city(city), zipCode(zipCode), district(district), country(country) {}

string Address::getHouse() {
    return house;
}

string Address::getRoad() {
    return road;
}

string Address::getCity() {
    return city;
}

int Address::getZipCode() {
    return zipCode;
}

string Address::getDistrict() {
    return district;
}

string Address::getCountry() {
    return country;
}
