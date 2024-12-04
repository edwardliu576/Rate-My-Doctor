#include "appointment.h"

Appointment::Appointment(const Doctor &Doc, const string &date, const string &time, bool status): theDoctor(Doc), date(date), time(time), status(status){}

void Appointment::changeAppointmentDetails(const Doctor &newDoc, const string &newDate, const string &newTime, bool newStatus){
    theDoctor=newDoc;
    date=newDate;
    time=newTime;
    status=newStatus;
}

void Appointment::outputAppointmentDetails(){
    cout<<"Appointment with Doctor "<<theDoctor.name
    <<" at "<<theDoctor.location<< " on "<<date<<" at "<<time
    <<". Status: "<<status<<endl;
}