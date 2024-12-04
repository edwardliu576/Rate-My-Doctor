#pragma once

#include <vector>
#include "doctor.h"            
#include "appointment.h"       
#include "account.h"
#include "ratings.h"
using namespace std;

class User : public Account{
    private:
        vector<Doctor> favoriteDoctors;   
        vector<Appointment> appointments;
    public:
        User(const string &, const string &, const string &, const string &);

        void leaveReview(const Doctor &, double, const string&); //need to add friend functions/getters

        void editReview(Doctor &, double, const string&);
        void deleteReview(); 
        
        void addToFavorites(const Doctor &);

};