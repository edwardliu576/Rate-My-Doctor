#pragma once
//still need to include account class
#include "account.h"
#include "data.h"
#include "ratings.h"
#include <string>

using namespace std;

class Doctor: public Account {
    friend class User;
    string NPI;
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
        
        string getPhone() const;
    //vector of doctors returned 
    
};