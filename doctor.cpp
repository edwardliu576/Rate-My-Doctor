#include "doctor.h"

void Doctor::editSpecialty(const string &newSpec) {
    specialty = newSpec;
}

void Doctor::editHospital(const string &newHospital) {
    facility = newHospital;
}

string Doctor:: getNPI () const {
    return NPI;
}
string Doctor::getCred() const{
    return cred;
}
string Doctor::getSpecialty() const {
    return specialty;
}
bool Doctor::getTele() const {
    return telehealth;
}
string Doctor::getFacility() const{
    return facility;
}

string Doctor::getPhone() const{
    return phone;
}
