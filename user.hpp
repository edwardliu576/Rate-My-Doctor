#pragma once

#include <vector>
#include <doctor.h>             
//#include <appointment.h>        update to get correct paths later
#include "account.h"
using namespace std;

class User : public Account{
    private:
        vector<Doctor> favoriteDoctors;   
        //vector<Appointment> appointments;
        //void calculateDistance();     //this will be figured out later
    public:
       User(const string &n, const string &un, const string &pwd, const string &addy,const string &zip);

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
        void addToFavorites(const Doctor &);

};