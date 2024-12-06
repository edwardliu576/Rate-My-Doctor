#include "userRatings.h"
#include <iostream>
#include <vector>
using namespace std; 

void userRatings::addRating(double rating, const string &review, int docIndex, const string&npi)
{
    if (rating < 0.0 || rating > 5.0)
    {
        cout << "Invalid Rating. Please enter a value from 0.0 to 5.0" << endl; 
        return; 
    }
    
    totalReviews = totalReviews + 1; 
    sumOfRatings = sumOfRatings + rating;

    ratings.push_back(rating); 
    comments.push_back(review); 
    npidata.push_back(npi); 
    docIndexes.push_back(docIndex); 
    updateAverage();

}

string userRatings::getNPI(int indexOfReview)
{
    if (indexOfReview < 0 || indexOfReview >= npidata.size()) {
        cout << "Invalid review index!" << endl;
        return "";
    }
    return npidata.at(indexOfReview); 

}
int userRatings::getDocIndex(int docIndex)
{
   if (docIndex < 0 || docIndex >= docIndexes.size()) {
        cout << "Invalid review index!" << endl;
        return -1;
    }
    return docIndexes.at(docIndex);
}
void userRatings::updateAverage() 
{
    if(totalReviews == 0)
    {
        averageOfRatings = 0.0; 
    }
    averageOfRatings = sumOfRatings / totalReviews;
}

double userRatings::getTotalReviews() const
{
    return totalReviews;
}
double userRatings::getUpdatedAverage() const
{
    return averageOfRatings; 
}

void userRatings::editRating(int indexOfReview, double newRating, const string &newComment) 
{
    if (indexOfReview < 0 || indexOfReview >= ratings.size()) {
        cout << "Invalid review index!" << endl;
        return;
    }

    if(newRating != 0)
    {
        sumOfRatings = sumOfRatings - ratings[indexOfReview];
        ratings[indexOfReview] = newRating; 
        sumOfRatings = sumOfRatings + newRating; 
    }
    if (newComment != "n" && newComment != "N"  )
    {
        comments[indexOfReview] = newComment; 

    }
    updateAverage(); 

}
void userRatings::deleteReview(int indexOfReview)
{
    if (indexOfReview < 0 || indexOfReview >= ratings.size())
    {
        cout << "Invalid index of review" << endl; 
        return; 
    }
    sumOfRatings = sumOfRatings - ratings[indexOfReview]; 
    ratings.erase(ratings.begin() + indexOfReview);
    comments.erase(comments.begin() + indexOfReview); 
    npidata.erase(npidata.begin() + indexOfReview); 
    totalReviews--; 
    updateAverage(); 
}