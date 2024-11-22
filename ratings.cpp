#include "ratings.h"
#include <iostream>
using namespace std; 

void Ratings::addRating(double rating)
{
    if (rating < 0.0 || rating > 5.0)
    {
        cout << "Invalid Rating, must enter a value from 0.0 to 5.0" << endl; 
    }
    totalReviews = totalReviews + 1; 
    sumOfRatings = sumOfRatings + rating;

}
double Ratings::averageRating() const 
{
    if(totalReviews == 0)
    {
        return 0.0; 
    }
    double avgRating = 0; 
    avgRating = sumOfRatings / totalReviews;
    return avgRating; 

}
double Ratings::getTotalReviews() const
{
    return totalReviews;
}