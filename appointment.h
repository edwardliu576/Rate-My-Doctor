#pragma once

#include <string>

#include "doctor.h"
#include <iostream>

using namespace std;

class Appointment{
    private:
        Doctor theDoctor;
        string date;
        string time;
        bool status;
    public:
        Appointment(const Doctor &, const string &, const string &, bool);
        void changeAppointmentDetails(const Doctor &, const string &, const string &, bool);
        void outputAppointmentDetails();
        
};