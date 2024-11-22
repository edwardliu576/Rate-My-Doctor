#pragma once

#include <string>

using namespace std;

class Appointment{
    private:
        string date;
        string time;
        string status;
    public:
        Appointment(const string &, const string &, const string &);
        //note: it's probably a good idea to add functions to alter the appointment
        //details here to simplify the user class's appointment-related functions
        
};