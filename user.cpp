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

//either use dynamic allocation (so then change vector to array) in the doctor's reviews
//so that we can properly delete the review
//otherwise, we can "delete" it by simply finding the review and setting it to blank
//or default values like "0.0" and empty strings for the comment
void User::deleteReview(){

}

void User::scheduleAppointment(const Doctor &Doc, const string &date, const string &time, bool status){
    appointments.emplace_back(Appointment(Doc, date, time, status));
}

//same issue as editReview
void User::editAppointment(){

}

//same issue as deleteReview
void User::deleteAppointment(){

}

void User::viewAppointments(){
    unsigned size=appointments.size();
    for(unsigned i=0; i<size; i++){
        appointments.at(i).outputAppointmentDetails();
    }
}

void User::addToFavorites(const Doctor &d){
    favoriteDoctors.push_back(d);
}