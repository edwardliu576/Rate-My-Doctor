#include "user.hpp"

User::User(const string &n, const string &un, const string &pwd, const string &addy,const string &zip): Account(n, un, pwd, addy, zip){}

void User::addToFavorites(const Doctor &d){
    favoriteDoctors.push_back(d);
}

vector<Doctor> User::getFavoriteDoctors(){
    return favoriteDoctors;
}