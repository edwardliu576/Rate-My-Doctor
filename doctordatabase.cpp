#include "doctordatabase.h"
#include "doctor.h"
#include "account.h"
#include "print.h"



void doctordatabase::addNewDoctor(const Doctor &d){
    doctors.push_back(d);
    ofstream myfile;
    myfile.open(file, std::ios::app);
    if(!myfile.is_open()) {
        throw runtime_error("Unable to open file");
    }
    myfile <<"\n"<< d.getNPI() << "," << d.getUsername() << "," << d.getPassword()<< "," << d.getName()<< ","<< d.getCred() << ","<<d.getSpecialty()<< "," <<d.getTele() << ","<<d.getFacility() << ","<<d.getAddress()<< ","<<d.getZipcode()<< "," <<d.getPhone()<< "\n";
    myfile.close();

}
void doctordatabase::searchZipcode(const string &zip){
    bool exists = false;
    for(int i=0; i < doctors.size(); i++){
        if(doctors.at(i).getZipcode()==zip){
            Print print = Print();
            print.printDocInformation(doctors.at(i));
            exists = true;
        }
    }
     if(!exists) {
        cout << "Doctor not found. :("<< endl;
    }
}

void doctordatabase::searchName(const string &name){
    bool exists = false;
    for(int i=0; i < doctors.size(); i++){
        if(doctors.at(i).getName()==name){
            Print print = Print();
            print.printDocInformation(doctors.at(i));
            exists = true; 
        }
    }
    if(!exists) {
        cout << "Doctor not found. :("<< endl;
    }
}
Doctor* doctordatabase::searchNPI(const string &nip){
    Doctor *newDoc= nullptr;
    for(int i=0; i < doctors.size(); i++){
        if(doctors.at(i).getNPI()==nip){
            newDoc= &doctors.at(i); 
            Print print = Print();
            print.printDocInformation(doctors.at(i));
            
        }
    }
    return newDoc;
}
void doctordatabase::searchSpecialty(const string &spec){
    bool exists=false;
    for(int i=0; i < doctors.size(); i++){
        if(doctors.at(i).getSpecialty()==spec){
            Print print = Print();
            print.printDocInformation(doctors.at(i));
            exists=true;
        }
    }
     if(!exists) {
        cout << "Doctor not found. :("<< endl;
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

