#pragma once
#include "account.h"
#include "ratings.h"
#include "userRatings.h"
#include <string>

using namespace std;

class userRatings;

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
<<<<<<< HEAD
    
    Ratings ratings;
=======
    Ratings reviews = Ratings();
>>>>>>> origin/master
    
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
        Ratings* getRatings(); 
        string getPhone() const;
<<<<<<< HEAD
        Ratings getRatings() const;
    
=======
>>>>>>> origin/master
};