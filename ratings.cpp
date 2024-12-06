#include "ratings.h"
#include <iostream>
#include <vector>
using namespace std; 

void Ratings::addRating(double rating)
{
    if (rating < 0.0 || rating > 5.0)
    {
        cout << "Invalid Rating, must enter a value from 0.0 to 5.0" << endl;
    }
    ratings.push_back(rating);
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

void Ratings::addComment(const string& review)
{
    comments.push_back(review); 
    
}
void Ratings::displayReviews() const
{
    cout << "Total Reviews: " << totalReviews << endl; 
    cout << "Average Rating: " << averageRating() << endl; 
    cout << "Reviews: " << endl;  
    for (int i = 0; i < comments.size(); i++)
    {
        string review = comments[i];
        // cout << "Review #: " << i + 1 << endl; 
        cout << "Review #" << i + 1 << ": " << comments[i] << std::endl;
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
    if (newComment != "n")
    {
        comments[indexOfReview] = newComment; 

    }

}

vector<string> Ratings::getComments(){
    return comments;
}