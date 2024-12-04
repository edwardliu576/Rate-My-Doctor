#pragma once

#include <string>

using namespace std;

struct Account {
    string name;
    string username;
    string password;
    string address;
    string zipcode; 

    Account(const string &n, const string &un, const string &pwd, const string &a, const string &z) : 
        name(n), username(un), password(pwd), address(a), zipcode(z) {};

    void editName(const string &);
    void editAddress(const string &);
    void editZipcode(const string &);
    void editUsername(const string &);
    void editPassword(const string &);

    string getName();
    string getAddress();
    string getZipcode();
    string getUsername();
    string getPassword();
};