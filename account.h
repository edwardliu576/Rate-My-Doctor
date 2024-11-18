#pragma once

#include <string>

using namespace std;

struct Account {
    string name;
    string username;
    string password;
    string location; 
    int id = 1;

    Account(const string &n, const string &un, const string &pwd, const string &l) : 
        name(n), username(un), password(pwd), location(l) {};

    void editName(const string &);
    void editLocation(const string &);
    void editUsername(const string &);
    void editPassword(const string &);
};