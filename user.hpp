#pragma once

#include <vector>
#include "doctor.h"                              
#include "account.h"
#include "ratings.h"
using namespace std;

class User : public Account{
    private:
        vector<Doctor> favoriteDoctors;
        //vector<Ratings> ratings;
    public:
       User(const string &n, const string &un, const string &pwd, const string &addy,const string &zip);

        void leaveReview(const Doctor &, double, const string&); //need to add friend functions/getters

        void editReview(Doctor &, double, const string&);
        void deleteReview(); 

        void addToFavorites(const Doctor &);
};