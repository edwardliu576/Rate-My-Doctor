#include "user.hpp"

User::User(const string &n, const string &un, const string &pwd, const string &l): Account(n, un, pwd, l){}

//when user leaves a review, create a Ratings object which includes the 
//rating and comment
//then since the doctor has a vector of Ratings, add this new Rating to that doctor's
//Ratings vector
void User::leaveReview(const Doctor &targetDoctor, double rating, const string& comment){
    //friend class declarations will solve the following 3 lines
    Ratings aRating;
    aRating.addRating(rating);
    aRating.addComment(comment);
    targetDoctor.reviews.push_back(aRating); //either make a getter for doctor's reviews
    //or use more friend class declarations
}

//either find some way to find the review or don't implement this function
//one way to find the review you want to edit
//is to add a review ID in the ratings class
//then given targetDoctor's reviews vector, loop through to find it
//then edit
void User::editReview(Doctor &targetDoctor, double rating, const string& comment){

}

//will be using vector erase
void User::deleteReview(){

}


void User::addToFavorites(const Doctor &d){
    favoriteDoctors.push_back(d);
}


//edit/delete review 
//take in number as parameter. that num is used to access the reviews vector of user
//from there once review is gotten will get NPI and use searchNPI to find which
//doctor is related. need number and string of int, string first int index, then star count
//then review
//-1 star don't change
//have index! find rating, find NPI, use NPI search to find the doctor
//inside doctor, will find index from review object to see which review needs
//to be changed
//then once that is located, do .edit()
//also need to change varfiables for reviews for account
//i i s 1st accesses index of reviews 
//user will have their reviews all printed out and they can choose which one. from there use NPI to locate doctor and edit/delete