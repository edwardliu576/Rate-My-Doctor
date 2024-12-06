#pragma once

#include <vector>
#include "doctor.h"                              
#include "account.h"
#include "ratings.h"
using namespace std;

class User : public Account{
    private:
        vector<Doctor> favoriteDoctors;
    public:
        User(const string &n, const string &un, const string &pwd, const string &addy,const string &zip);
        void addToFavorites(const Doctor &);
        vector<Doctor> getFavoriteDoctors();
};