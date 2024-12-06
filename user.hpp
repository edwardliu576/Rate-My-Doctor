#pragma once

#include <vector>
#include "doctor.h"                              
#include "account.h"
#include "ratings.h"
#include "userRatings.h"
using namespace std;


class userRatings; 

class User : public Account{
    private:
        vector<Doctor> favoriteDoctors;
<<<<<<< HEAD
        Ratings userReviewsOfDoctors;
    public:
        User(const string &n, const string &un, const string &pwd, const string &addy,const string &zip);
        void addToFavorites(const Doctor &);
        vector<Doctor> getFavoriteDoctors();
        Ratings& getUserReviews();
=======
        vector<Ratings> userReviewsOfDoctors;
        userRatings review = userRatings(); 

    public:
        User(const string &n, const string &un, const string &pwd, const string &addy,const string &zip);
        void addToFavorites(const Doctor &);
        userRatings* getRatings();  
        vector<Doctor> getFavoriteDoctors();
>>>>>>> origin/master
};