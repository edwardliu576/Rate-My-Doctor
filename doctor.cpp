#include "doctor.h"

void Doctor::editSpecialty(const string &newSpec) {
    specialty = newSpec;
}

void Doctor::editHospital(const string &newHospital) {
    facility = newHospital;
}

string Doctor::getNPI(){
    return NPI;
}
string Doctor::getCred(){
    return cred;
}
string Doctor::getSpecialty(){
    return specialty;
}
bool Doctor::getTele(){
    return telehealth;
}
string Doctor::getFacility(){
    return facility;
}
string Doctor::getAddy(){
    return address;
}
string Doctor::getZip(){
    return zipcode;
}
string Doctor::getPhone(){
    return phone;
}
