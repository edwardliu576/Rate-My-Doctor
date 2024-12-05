#include "user.hpp"

User::User(const string &n, const string &un, const string &pwd, const string &addy,const string &zip): Account(n, un, pwd, addy, zip){}

void User::leaveReview(Doctor &targetDoctor, double rating, const string& comment){
    Ratings aRating;
    aRating.addRating(rating);
    aRating.addComment(comment);
    targetDoctor.ratings.push_back(aRating);
    userReviewsOfDoctors.push_back(aRating);
}

void User::editReview(int index, double newRating, const string &newComment){
    userReviewsOfDoctors.at(index).editReview(index, newRating, newComment);
}

void User::deleteReview(int index){
    userReviewsOfDoctors.erase(userReviewsOfDoctors.begin()+index);
}

void User::addToFavorites(const Doctor &d){
    favoriteDoctors.push_back(d);
}