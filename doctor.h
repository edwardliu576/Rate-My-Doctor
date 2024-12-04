#pragma once
//still need to include account class
#include "account.h"
#include "data.h"
#include "ratings.h"
#include <string>

using namespace std;

class Doctor: public Account {
    string NPI;
    string name;
    string username;
    string password;
    string cred;
    string specialty; 
    bool telehealth;
    string facility;
    string address;
    string zipcode;
    string phone;
    
    vector <Ratings> ratings;
    
    public:
        Doctor(const string &NPII, const string &n, const string &un, const string &pwd, const string &credd, const string &spec, const bool &tele, const string &hosp, const string & addy, const string& zip, const string& ph) : 
            Account(n, un, pwd, addy, zip), NPI(NPII), cred(credd), specialty(spec), telehealth(tele), facility(hosp), phone(ph){}

        void editSpecialty(const string &);
        void editHospital(const string &);

        string getNPI() const;
        string getCred() const;
        string getSpecialty() const;
        bool getTele() const;
        string getFacility() const;
        string getAddy() const;
        string getZip() const;
        string getPhone() const;
    //vector of doctors returned 
    
};