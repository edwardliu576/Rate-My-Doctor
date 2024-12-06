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
   public:
   vector<double> ratings;
   vector<string> comments;


   Ratings(int total = 0, double sum = 0.0, double average = 0.0)
   : totalReviews(total), sumOfRatings(sum), averageOfRatings(average)
   {


   }


   void addRating(double rating, const string &review); 
   void updateAverage();
   double getTotalReviews() const;
   double getUpdatedAverage() const;
   void displayReviews() const;
   void editReview(int indexOfReview, double newRating, const string &newComment);
   void deleteReview(int indexOfReview);
  


};




#endif
