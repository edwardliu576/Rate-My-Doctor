#ifndef RATINGS_H
#define RATINGS_H
#include <string>
#include <vector>

using namespace std;

class userRatings
{
    friend class User;
    int totalReviews;
    double sumOfRatings;
    double averageOfRatings;

public:
    vector<double> ratings;
    vector<string> comments;
    vector<string> npidata;
    vector<int> docIndexes;

    userRatings(int total = 0, double sum = 0.0, double average = 0.0)
        : totalReviews(total), sumOfRatings(sum), averageOfRatings(average)
    {
    }
    void userRatings::addRating(double rating, const string &review, int indexOfReview, const string &npi);
    string getNPI(int indexOfReview);
    int getDocIndex(int docIndex);
    void getRating();
    void updateAverage();
    double getTotalReviews() const;
    double getUpdatedAverage() const;
    void displayReviews() const;
    void editRating(int indexOfReview, double newRating, const string &newComment);
    void deleteReview(int indexOfReview);
};

#endif