//#include "account.h"
#include "doctor.h"
#include "doctordatabase.h"
// #include "user.hpp"
#include "print.h"

#include <iostream>

using namespace std; 

void Print::printDocInformation(const Doctor &doctor)
{
    cout << "Doctor Information: " << endl; 
    cout << "Name: " << doctor.getName() << endl;
    cout << "NPI: " << doctor.getNPI() << endl; 
    cout << "Credential: " << doctor.getCred() << endl;  
    cout << "Speciality: " << doctor.getSpecialty() << endl; 
    if (doctor.getTele())
    {
        telehealthAvailability = "Yes"; 
    }
    else
    {
        telehealthAvailability = "No"; 
    }
    cout << "Telehealth Available?: " << telehealthAvailability << endl; 
    cout << "Facility: " << doctor.getFacility() << endl; 
    cout << "Address: " << doctor.getAddress() << endl; 
    cout << "Zipcode: " << doctor.getZipcode() << endl;
    cout << "Phone: " << doctor.getPhone() << endl;
    cout << endl; 

}
void Print::printDocLoginInformation(const Doctor &docLogin)
{
    cout << "Doctor Settings: " << endl; 
    cout << "Username: " << docLogin.getUsername() << endl; 
    cout << "Password: " << docLogin.getPassword() << endl; 
    cout << "NPI: " << docLogin.getNPI() << endl; 
    cout << "Name: " << docLogin.getName() << endl;
    cout << "Credential: " << docLogin.getCred() << endl;  
    cout << "Speciality: " << docLogin.getSpecialty() << endl; 
    cout << "Address: " << docLogin.getAddress() << endl; 
    cout << "Zipcode: " << docLogin.getZipcode() << endl; 
    cout << "Facility: " << docLogin.getFacility() << endl; 
    cout << "Phone: " << docLogin.getPhone() << endl;
}
void Print::printUserLoginInformation(const User &userLogin)
{
    cout << "User Settings: " << endl; 
    cout << "Username: " << userLogin.getUsername() << endl; 
    cout << "Password: " << userLogin.getPassword() << endl; 
    cout << "Name: " << userLogin.getName() << endl;
    cout << "Address: " << userLogin.getAddress() << endl; 
    cout << "Zipcode: " << userLogin.getZipcode() << endl; 
}
void Print::printReview(const Ratings &review)
{
    if (review.ratings.empty())
    {
        cout << "No reviews found." << endl; 
        return; 
    }
    cout << "Doctor's Reviews: " << endl; 
    cout << "Total Reviews: " << review.getTotalReviews() << endl; 
    cout << "Average Review: " << review.getUpdatedAverage() << endl; 
    cout << "Reviews: " << endl; 
    for (int i = 0; i < review.ratings.size(); i++)
    {
        cout << "Rating #: " << i+1 << endl; 
        cout << "Review: " << "    " << review.ratings[i] << "   " << "Comment: " << review.comments[i] << endl;
    }
    cout << endl;;

}


