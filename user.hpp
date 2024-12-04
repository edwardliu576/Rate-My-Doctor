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
        void calculateDistance();     //this will be figured out later
    public:
        User(const string &, const string &, const string &, const string &); //good!

        void leaveReview(const Doctor &, double, const string&); //need to add friend functions/getters

        void editReview(Doctor &, double, const string&); //to be decided
        void deleteReview(); //to be decided

        void scheduleAppointment(const Doctor &, const string &, const string &, bool); //good!

        void editAppointment(); //to be decided
        void deleteAppointment(); //to be decided

        void viewAppointments(); //good! but remember friend class declaration

        void viewSuggestedDoctors(); //need to figure out with calculateDistance too

        void addToFavorites(const Doctor &); //good!

};