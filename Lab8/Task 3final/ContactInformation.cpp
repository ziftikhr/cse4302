#include "ContactInformation.h"

ContactInformation::ContactInformation(int primaryPhoneNumber, int secondaryPhoneNumber, string email)
    : primaryPhoneNumber(primaryPhoneNumber), secondaryPhoneNumber(secondaryPhoneNumber), email(email) {}

int ContactInformation::getPrimaryPhoneNumber() {
    return primaryPhoneNumber;
}

int ContactInformation::getSecondaryPhoneNumber() {
    return secondaryPhoneNumber;
}

string ContactInformation::getEmail() {
    return email;
}
