#include "userdatabase.h"
#include "doctor.h"
#include "account.h"
//include print class


void userDatabase::addNewUser(const User &u){
    users.push_back(u);
    ofstream myfile;
    myfile.open(file, std::ios::app);
    if(!myfile.is_open()) {
        throw runtime_error("Unable to open file");
    }
    myfile <<"\n" << u.getName()<< "," << u.getUsername() << "," << u.getPassword()<< ","  << u.getAddress() << "," << u.getZipcode() << "\n";
    myfile.close();

}
 bool userDatabase::usernameExists(const string &un){
    for(int i=0; i < users.size(); i++){
        if(users.at(i).getUsername()==un){
            return true;
        }

    }
    return false;
 }
User* userDatabase::userLogin(const string & un, const string & p){

    User *u= nullptr;
    for(int i=0; i < users.size(); i++){
        if(users.at(i).getUsername()==un){
            if(users.at(i).getPassword()==p){
                u= &users.at(i);
                cout << "Welcome!" << endl;
                break;
            }
        }
    }
    return u;
}

// int main(){
//     // userDatabase u = userDatabase("users.csv");
//     // User newUser= User("silly billy", "billlikesfrogs", "googoo","123 chochoo ct","30221");
//     // u.addNewUser(newUser);
// }
