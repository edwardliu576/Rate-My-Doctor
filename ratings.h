#ifndef RATINGS_H
#define RATINGS_H
#include <string>
#include <vector>

using namespace std;


class Ratings
{
    friend class User; 
    int totalReviews; 
    double sumOfRatings; 
    double averageOfRatings;
    vector<double> ratings; 
    vector<string> comments; 

    public:
        Ratings(int total = 0, double sum = 0.0, double average = 0.0) 
        : totalReviews(total), sumOfRatings(sum), averageOfRatings(average)
        {

        }

        void addRating(double rating); 
        double averageRating() const; 
        double getTotalReviews() const; 
        void addComment(const string& review); 
        void displayReviews() const; 
        void editReview(int newReview, double newRating, const string &newComment) ;
        vector<string> getComments(); 
    

}; 


#endif