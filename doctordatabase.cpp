#include "doctordatabase.h"
#include "doctor.h"
#include "account.h"
#include "print.h"
//include print class


void doctordatabase::addNewDoctor(const Doctor &d){
    doctors.push_back(d);
    ofstream myfile;
    myfile.open(file, std::ios::app);
    if(!myfile.is_open()) {
        throw runtime_error("Unable to open file");
    }
    myfile <<"\n"<< d.getNPI() << ","<< d.getName()<< "," << d.getUsername() << "," << d.getPassword()<< "," << d.getCred() << ","<<d.getSpecialty()<< "," <<d.getTele() << ","<<d.getFacility() << ","<<d.getAddress()<< ","<<d.getZipcode()<< "," <<d.getPhone()<< "\n";
    myfile.close();

}
void doctordatabase::searchZipcode(const string &zip){
    for(int i=0; i < doctors.size(); i++){
        if(doctors.at(i).getZipcode()==zip){
            Print print = Print();
            print.printDocInformation(doctors.at(i));
            //add in prints from print class 
        }
    }
}

void doctordatabase::searchName(const string &name){
    bool exists = false;
    for(int i=0; i < doctors.size(); i++){
        if(doctors.at(i).getName()==name){
            Print print = Print();
            print.printDocInformation(doctors.at(i));
            exists = true;
            //add in prints from print class 
        }
    }
    if(!exists) {
        cout << "Doctor not found. :(";
    }
}
void doctordatabase::searchNPI(const string &nip){
    bool exists = false;
    for(int i=0; i < doctors.size(); i++){
        if(doctors.at(i).getNPI()==nip){
            Print print = Print();
            print.printDocInformation(doctors.at(i));
            exists = true;
        }
    }
    if(!exists) {
        cout << "Doctor not found. :(";
    }
}
void doctordatabase::searchSpecialty(const string &spec){
    for(int i=0; i < doctors.size(); i++){
        if(doctors.at(i).getSpecialty()==spec){
            Print print = Print();
            print.printDocInformation(doctors.at(i));

        }
    }
}
 bool doctordatabase::usernameExists(const string &un){
    for(int i=0; i < doctors.size(); i++){
        if(doctors.at(i).getUsername()==un){
            return true;
        }
    }
    return false;
 }
Doctor* doctordatabase::doctorlogin(const string & un, const string & p){

    Doctor *d= nullptr;
    for(int i=0; i < doctors.size(); i++){
        if(doctors.at(i).getUsername()==un){
            if(doctors.at(i).getPassword()==p){
                d= &doctors.at(i);
                cout << "Welcome!" << endl;
                break;
            }
        }
    }
    return d;
}

