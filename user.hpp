#pragma once

#include <vector>
#include "doctor.h"                              
#include "account.h"
#include "ratings.h"
using namespace std;

class User : public Account{
    private:
        vector<Doctor> favoriteDoctors;
        vector<Ratings> userReviewsOfDoctors;
    public:
       User(const string &n, const string &un, const string &pwd, const string &addy,const string &zip);
        void leaveReview(Doctor &, double, const string&);
        void editReview(int, double, const string &);
        void deleteReview(int); 
        void addToFavorites(const Doctor &);
};