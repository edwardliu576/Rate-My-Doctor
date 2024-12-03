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
        void changeAppointmentDetails(const string &, const string &, const string &);
        
};