#pragma once

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include "doctor.h"
#include "user.hpp"

using namespace std;

class doctordatabase {
    vector<Doctor> doctors;
    string file;

    public:
    doctordatabase(const string& filename="doctors.csv"){
        file= filename;
        ifstream file(filename);
    //vector <Doctor> doctors;
    if(!file.is_open()) {
        throw runtime_error("Unable to open file");
    }

    string row;
    while(getline(file, row)) {
        stringstream ss(row);
        string cell;

        string theID="";
        // NPI
        getline(ss, cell, ',');
        if(cell.empty()) {
            theID= "-1";
        }
        else if(!cell.empty() && cell.front() == '"' && cell.back() == '"') {
            cell = cell.substr(1, cell.size()-2);
            theID=cell;
        }
        else {
            theID=cell;
        }

        //un
        string theun="";
       
        getline(ss, cell, ',');
        if(cell.empty()) {
            theun= " ";
        }
        else if(!cell.empty() && cell.front() == '"' && cell.back() == '"') {
            cell = cell.substr(1, cell.size()-2);
            theun=cell;
        }
        else {
            theun=cell;
        }

        //un
        string thepwd="";
       
        getline(ss, cell, ',');
        if(cell.empty()) {
            thepwd= " ";
        }
        else if(!cell.empty() && cell.front() == '"' && cell.back() == '"') {
            cell = cell.substr(1, cell.size()-2);
            thepwd=cell;
        }
        else {
            thepwd=cell;
        }
        // 
        string cell2;
        string theName="";
        getline(ss, cell, ',');
        getline(ss, cell2, ',');
        if(cell.empty() && cell2.empty()) {
             theName= "-1";
        }
        else {
            if(!cell.empty() && cell.front() == '"' && cell.back() == '"') {
                cell = cell.substr(1, cell.size()-2);
            }
            if(!cell2.empty() && cell2.front() == '"' && cell2.back() == '"') {
                cell2 = cell2.substr(1, cell2.size()-2);
            }
            theName= cell2 + ' ' + cell;
        }

        // CREDENTIALS
        string creds="";
        getline(ss, cell, ',');
        if(cell.empty()) {
            creds= "-1";
        }
        else if(!cell.empty() && cell.front() == '"' && cell.back() == '"') {
            cell = cell.substr(1, cell.size()-2);
            creds=cell;
        }
        else {
            creds=cell;
        }

        // SPECIALTY
        string specs="";
        getline(ss, cell, ',');
        if(cell.empty()) {
            specs="-1";
        }
        else if(!cell.empty() && cell.front() == '"' && cell.back() == '"') {
            cell = cell.substr(1, cell.size()-2);
            specs=cell;
        }
        else {
            specs=cell;
        }

        // TELEHEALTH (y/n)
        bool tele= false;
        getline(ss, cell, ',');
        if(cell.empty() || cell == "N") {
            tele=false;
        }
        else {
            tele=true;
        }

        // FACILITY
        string fac = "";
        getline(ss, cell, ',');
        if(cell.empty()) {
            fac="-1";
        }
        else if(!cell.empty() && cell.front() == '"' && cell.back() == '"') {
            cell = cell.substr(1, cell.size()-2);
            fac=cell;
        }
        else {
            fac=cell;
        }

        // ADDRESS
        string addy = "";
        string line1, line2, city, state;
        getline(ss, line1, ',');
        getline(ss, line2, ',');
        getline(ss, city, ',');
        getline(ss, state, ',');

        if(line1.empty()) {
            addy="-1";
        }
        else {
            if(!line1.empty() && line1.front() == '"' && line1.back() == '"') {
                line1 = line1.substr(1, line1.size()-2);
            }
            if(!line2.empty() && line2.front() == '"' && line2.back() == '"') {
                line2 = line2.substr(1, line2.size()-2);
            }

            if(line2.empty()) {
                addy=line1 + ", " + city + ", " + state;
            }
            else {
                addy=line1 + ", " + line2 + ", " + city + ", " + state;
            }
        }

        // ZIPCODE
        string zip= "";
        getline(ss, cell, ',');
        if(cell.empty()) {
            zip="-1";
        }
        else if(!cell.empty() && cell.front() == '"' && cell.back() == '"') {
            cell = cell.substr(1, cell.size()-2);
            zip=cell.substr(0, 5);
        }
        else {
            zip=cell.substr(0, 5);
        }

        string ph = "";
        // PHONE NUMBER
        getline(ss, cell, ',');
        if(cell.empty()) {
            ph="-1";
        }
        else if(!cell.empty() && cell.front() == '"' && cell.back() == '"') {
            cell = cell.substr(1, cell.size()-2);
            ph=cell;
        }
        else {
            ph=cell;
        }

        Doctor d= Doctor(theID, theName, theun, thepwd,creds,specs, tele, fac,addy, zip, ph);
        doctors.push_back(d);
    }
    }
    void addNewDoctor(const Doctor &d);
    void searchZipcode(const string &zip);
    void searchNPI(const string &nip);
    void searchName(const string &name); 
    void searchSpecialty(const string &spec); 
    bool usernameExists(const string &un);
    Doctor* doctorlogin(const string & un, const string & p);
};

