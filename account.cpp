#include "account.h"

void Account::editName(const string &newName) {
    name = newName;
}

void Account::editAddress(const string &newAddress) {
    address = newAddress;
}

void Account::editZipcode(const string &newZipcode) {
    zipcode = newZipcode;
}

void Account::editUsername(const string &newUn) {
    username = newUn;
}

void Account::editPassword(const string &newPwd) {
    password = newPwd;
}

string Account::getName() const{
    return name;
}

string Account::getAddress() const{
    return address;
}

string Account::getZipcode() const{
    return zipcode;
}

string Account::getUsername() const{
    return username;
}

string Account::getPassword() const{
    return password;
}