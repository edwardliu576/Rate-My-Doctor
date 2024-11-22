#include "data.h"

doctorRecords::doctorRecords(const string& fileName) {
    ifstream file(fileName);

    if(!file.is_open()) {
        throw runtime_error("Unable to open file");
    }

    string row;
    while(getline(file, row)) {
        stringstream ss(row);
        string cell;


        // NPI
        getline(ss, cell, ',');
        if(cell.empty()) {
            NPI.push_back("-1");
        }
        else if(!cell.empty() && cell.front() == '"' && cell.back() == '"') {
            cell = cell.substr(1, cell.size()-2);
            NPI.push_back(cell);
        }
        else {
            NPI.push_back(cell);
        }

        // 
        string cell2;
        getline(ss, cell, ',');
        getline(ss, cell2, ',');
        if(cell.empty() && cell2.empty()) {
            name.push_back("-1");
        }
        else {
            if(!cell.empty() && cell.front() == '"' && cell.back() == '"') {
                cell = cell.substr(1, cell.size()-2);
            }
            if(!cell2.empty() && cell2.front() == '"' && cell2.back() == '"') {
                cell2 = cell2.substr(1, cell2.size()-2);
            }
            name.push_back(cell2 + ' ' + cell);
        }

        // CREDENTIALS
        getline(ss, cell, ',');
        if(cell.empty()) {
            cred.push_back("-1");
        }
        else if(!cell.empty() && cell.front() == '"' && cell.back() == '"') {
            cell = cell.substr(1, cell.size()-2);
            cred.push_back(cell);
        }
        else {
            cred.push_back(cell);
        }

        // SPECIALTY
        getline(ss, cell, ',');
        if(cell.empty()) {
            spec.push_back("-1");
        }
        else if(!cell.empty() && cell.front() == '"' && cell.back() == '"') {
            cell = cell.substr(1, cell.size()-2);
            spec.push_back(cell);
        }
        else {
            spec.push_back(cell);
        }

        // TELEHEALTH (y/n)
        getline(ss, cell, ',');
        if(cell.empty() || cell == "N") {
            telehealth.push_back(false);
        }
        else {
            telehealth.push_back(true);
        }

        // FACILITY
        getline(ss, cell, ',');
        if(cell.empty()) {
            facility.push_back("-1");
        }
        else if(!cell.empty() && cell.front() == '"' && cell.back() == '"') {
            cell = cell.substr(1, cell.size()-2);
            facility.push_back(cell);
        }
        else {
            facility.push_back(cell);
        }

        // ADDRESS
        string line1, line2, city, state;
        getline(ss, line1, ',');
        getline(ss, line2, ',');
        getline(ss, city, ',');
        getline(ss, state, ',');

        if(line1.empty()) {
            address.push_back("-1");
        }
        else {
            if(!line1.empty() && line1.front() == '"' && line1.back() == '"') {
                line1 = line1.substr(1, line1.size()-2);
            }
            if(!line2.empty() && line2.front() == '"' && line2.back() == '"') {
                line2 = line2.substr(1, line2.size()-2);
            }

            if(line2.empty()) {
                address.push_back(line1 + ", " + city + ", " + state);
            }
            else {
                address.push_back(line1 + ", " + line2 + ", " + city + ", " + state);
            }
        }

        // ZIPCODE
        getline(ss, cell, ',');
        if(cell.empty()) {
            zipcode.push_back("-1");
        }
        else if(!cell.empty() && cell.front() == '"' && cell.back() == '"') {
            cell = cell.substr(1, cell.size()-2);
            zipcode.push_back(cell);
        }
        else {
            zipcode.push_back(cell);
        }

        // PHONE NUMBER
        getline(ss, cell, ',');
        if(cell.empty()) {
            phone.push_back("-1");
        }
        else if(!cell.empty() && cell.front() == '"' && cell.back() == '"') {
            cell = cell.substr(1, cell.size()-2);
            phone.push_back(cell);
        }
        else {
            phone.push_back(cell);
        }
    }
};

vector<string> doctorRecords::getNPI() {
    return NPI;
}

vector <string> doctorRecords::getName() {
    return name;
}

vector <string> doctorRecords::getCred() {
    return cred;
}
vector <string> doctorRecords::getSpec() {
    return spec;
}

vector <bool> doctorRecords::getTelehealth() {
    return telehealth;
}

vector <string> doctorRecords::getFacility() {
    return facility;
}

vector <string> doctorRecords::getAddress() {
    return address;
}

vector <string> doctorRecords::getZipcode() {
    return zipcode;
}

vector <string> doctorRecords::getPhone() {
    return phone;
}