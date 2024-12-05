#pragma once

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include "user.hpp"

using namespace std;

class userDatabase {
    vector<User> users;
    string file;

    public:
    userDatabase(const string& filename="users.csv"){
        file= filename;
        ifstream file(filename);
    if(!file.is_open()) {
        throw runtime_error("Unable to open file");
    }

    }
    void addNewUser(const User &u);
    bool usernameExists(const string &un);
    User userLogin(const string & un, const string & p);
};

