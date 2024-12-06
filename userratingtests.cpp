#include <gtest/gtest.h>
#include "userRatings.h"

//test constructor
TEST(UserRatingsTest, ConstructorInitialState) {
    userRatings ratings;
    EXPECT_EQ(ratings.getTotalReviews(), 0);
    EXPECT_DOUBLE_EQ(ratings.getUpdatedAverage(), 0.0);
}

//checking edit rating
TEST(UserRatingsTest, EditRating) {
    userRatings ratings;
    ratings.addRating(4.0, "Good service", 1, "NPI12345");
    ratings.addRating(3.0, "Average service", 2, "NPI67890");

    ratings.editRating(1, 4.5, "Updated review");

    EXPECT_DOUBLE_EQ(ratings.getUpdatedAverage(), 4.25);
    EXPECT_EQ(ratings.ratings[1], 4.5);
    EXPECT_EQ(ratings.comments[1], "Updated review");
}

//delete review
TEST(UserRatingsTest, DeleteReview) {
    userRatings ratings;
    ratings.addRating(4.0, "Good service", 1, "NPI12345");
    ratings.addRating(5.0, "Excellent!", 2, "NPI67890");

    ratings.deleteReview(0);

    EXPECT_EQ(ratings.getTotalReviews(), 1);
    EXPECT_DOUBLE_EQ(ratings.getUpdatedAverage(), 5.0);
}

//test NPI of review
TEST(UserRatingsTest, GetNPI) {
    userRatings ratings;
    ratings.addRating(4.5, "Great service", 1, "NPI12345");

    EXPECT_EQ(ratings.getNPI(0), "NPI12345");
}

//test doctor index of a review
TEST(UserRatingsTest, GetDocIndex) {
    userRatings ratings;
    ratings.addRating(4.5, "Great service", 1, "NPI12345");

    EXPECT_EQ(ratings.getDocIndex(0), 1);
}

// testing invalid rating
TEST(UserRatingsTest, InvalidRating) {
    userRatings ratings;
    ratings.addRating(-1.0, "Bad service", 1, "NPI12345");
    EXPECT_EQ(ratings.getTotalReviews(), 0);
}

//test that the comment is stored
TEST(UserRatingsTest, AddRatingWithComment) {
    userRatings ratings;
    ratings.addRating(4.5, "Great service", 1, "NPI12345");

    EXPECT_EQ(ratings.comments[0], "Great service");
}
