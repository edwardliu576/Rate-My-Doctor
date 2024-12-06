#include "ratings.h"
#include <iostream>
#include <vector>
using namespace std; 

void Ratings::addRating(double rating, const string &review)
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

}
void Ratings::updateAverage() 
{
    if(totalReviews == 0)
    {
        averageOfRatings = 0.0; 
    }
    averageOfRatings = sumOfRatings / totalReviews;
}

double Ratings::getTotalReviews() const
{
    return totalReviews;
}
double Ratings::getUpdatedAverage() const
{
    return averageOfRatings; 
}

void Ratings::displayReviews() const
{
    cout << "Total Reviews: " << getTotalReviews() << endl; 
    cout << "Average Rating: " << getUpdatedAverage() << endl; 
    cout << "Reviews: " << endl;  
    for (int i = 0; i < comments.size(); i++)
    {
        string review = comments[i];
        cout << "Review Number: " << i + 1 << endl; 

    }
    
}
void Ratings::editReview(int indexOfReview, double newRating, const string &newComment) 
{
    if(newRating > 0)
    {
        sumOfRatings = sumOfRatings - ratings[indexOfReview];
        ratings[indexOfReview] = newRating; 
        sumOfRatings = sumOfRatings + newRating; 
    }
    if (newComment != "n" ||newComment != "N"  )
    {
        comments[indexOfReview] = newComment; 

    }

}
void Ratings::deleteReview(int indexOfReview)
{
    ratings.erase(ratings.begin()+indexOfReview); 
}