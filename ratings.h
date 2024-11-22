#ifndef RATINGS_H
#define RATINGS_H
#include <string>
#include <vector>

using namespace std;


class Ratings
{
    int totalReviews; 
    double sumOfRatings; 
    double averageOfRatings;
    vector<string> comments; 

    Ratings(int total = 0, double sum = 0.0, double average = 0.0) 
    : totalReviews(total), sumOfRatings(sum), averageOfRatings(average)
    {

    }

    void addRating(double rating); 
    double averageRating() const; 
    double getTotalReviews() const; 
    void addComment(const string& review); 
    void displayReviews() const; 

}; 


#endif