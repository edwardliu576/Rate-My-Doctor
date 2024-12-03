#include "appointment.h"

Appointment::Appointment(const string &d, const string &t, const string &s): date(d), time(t), status(s){}

void Appointment::changeAppointmentDetails(const string &newDate, const string &newTime, const string &newStatus){
    date=newDate;
    time=newTime;
    status=newStatus;
}