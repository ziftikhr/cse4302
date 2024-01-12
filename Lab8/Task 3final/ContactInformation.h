#pragma once
#include <string>

using namespace std;

class ContactInformation {
private:
    int primaryPhoneNumber;
    int secondaryPhoneNumber;
    string email;

public:
    ContactInformation(int primaryPhoneNumber, int secondaryPhoneNumber, string email);
    int getPrimaryPhoneNumber();
    int getSecondaryPhoneNumber();
    string getEmail();
};
