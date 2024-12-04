#include "doctordatabase.h"
#include "doctor.h"
#include "account.h"
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
            //add in prints from print class 
        }
    }
}

void doctordatabase::searchName(const string &name){
    for(int i=0; i < doctors.size(); i++){
        if(doctors.at(i).getName()==name){
            //add in prints from print class 
        }
    }
}
void doctordatabase::searchNPI(const string &nip){
    for(int i=0; i < doctors.size(); i++){
        if(doctors.at(i).getNPI()==nip){
            //add in prints from print class 
        }
    }
}
void doctordatabase::searchSpecialty(const string &spec){
    for(int i=0; i < doctors.size(); i++){
        if(doctors.at(i).getSpecialty()==spec){
            //add in prints from print class 
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
Doctor doctordatabase::doctorlogin(const string & un, const string & p){
    Doctor d= doctors.at(0);
    for(int i=0; i < doctors.size(); i++){
        if(doctors.at(i).getUsername()==un){
            if(doctors.at(i).getPassword()==p){
                d= doctors.at(i);
            }
        }
    }
    return d;
}

int main(){
    doctordatabase d = doctordatabase("doctors.csv");
    Doctor newDoc= Doctor("1151", "silly billy", "billlikesfrogs", "googoo", "docofdayear","heart", true,"batman headquarters", "123 chochoo ct","30221", "6266777194");
    d.addNewDoctor(newDoc);
}
