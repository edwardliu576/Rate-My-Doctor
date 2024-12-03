#pragma once

#include <vector>
//#include <doctor.h>             update to get correct paths later
#include <appointment.h>       
#include "account.h"
using namespace std;

class User : public Account{
    private:
        vector<Doctor> favoriteDoctors(10);   //default size of 10
        vector<Appointment> appointments(10); //default size of 10
        void calculateDistance();     //this will be figured out later
    public:
        User(const string &, const string &, const string &, const string &);

        //these are put in place to know what to do, but the details
        //such as return type and parameters will be figured out later
        //as development progresses
        void leaveReview();
        void editReview();
        void deleteReview();
        void scheduleAppointment();
        void editAppointment();
        void deleteAppointment();
        void viewAppointments();
        void viewSuggestedDoctors();
        void addToFavorites();

};