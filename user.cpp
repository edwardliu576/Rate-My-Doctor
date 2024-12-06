#include "user.hpp"

User::User(const string &n, const string &un, const string &pwd, const string &addy,const string &zip): Account(n, un, pwd, addy, zip){}

void User::addToFavorites(const Doctor &d){
    favoriteDoctors.push_back(d);
}

<<<<<<< HEAD
vector<Doctor> User::getFavoriteDoctors(){
    return favoriteDoctors;
}

Ratings& User::getUserReviews(){
    return userReviewsOfDoctors;
=======
userRatings* User::getRatings() {
    return &review;
}

vector<Doctor> User::getFavoriteDoctors(){
    return favoriteDoctors;
>>>>>>> origin/master
}