#pragma once
//still need to include account class
#include "account.h"
#include <string>

using namespace std;

class Doctor: public Account {
    string name;
    string username;
    string password;
    string location; 
    int id = 1;
    string specialty;
    double rating;
    //vector <Review> reviews;
    string hospital;

    Doctor(const string &n, const string &un, const string &pwd, const string &l, const string &spec, double &rate, string &hosp) : 
        Account(n, un, pwd, l) {};

    void editSpecialty(const string &);
    void editHospital(const string &);
    
};