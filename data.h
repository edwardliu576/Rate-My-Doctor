#pragma once

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

struct doctorRecords {
    vector <string> NPI;
    vector <string> name;
    vector <string> cred;
    vector <string> spec;
    vector <bool> telehealth;
    vector <string> facility;
    vector <string> address;
    vector <string> zipcode;
    vector <string> phone;


    doctorRecords(const string&);
    vector<string> getNPI();
    vector <string> getName();
    vector <string> getCred();
    vector <string> getSpec();
    vector <bool> getTelehealth();
    vector <string> getFacility();
    vector <string> getAddress();
    vector <string> getZipcode();
    vector <string> getPhone();
};