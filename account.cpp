#include "account.h"

void Account::editName(const string &newName) {
    name = newName;
}

void Account::editAddress(const string &newAddress) {
    address = newAddress;
}


void Account::editZipcode(const string &newZipCode) {
    zipcode = newZipCode;
}
void Account::editUsername(const string &newUn) {
    username = newUn;
}

void Account::editPassword(const string &newPwd) {
    password = newPwd;
}

 string Account::getName(){
    return name;
 }
string Account::getAddress(){
    return address;
}
string Account::getZipcode(){
    return zipcode;
}
string Account::getUsername(){
    return username;
}
string Account::getPassword(){
    return password;
}