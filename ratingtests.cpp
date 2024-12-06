
#include "gtest/gtest.h"
#include "ratings.h"

TEST(RatingsTest, AddRating)
{
    Ratings ratings;
    ratings.addRating(4.0);
    ratings.addRating(3.5);

    ASSERT_EQ(ratings.getTotalReviews(), 2);
    ASSERT_NEAR(ratings.averageRating(), 3.75, 0.001);
}

TEST(RatingsTest, AverageRating)
{
    Ratings ratings;
    ratings.addRating(5.0);
    ratings.addRating(7.0);

    ASSERT_NEAR(ratings.averageRating(), 6.0, 0.001);
}

TEST(RatingsTest, AddComment)
{
    Ratings ratings;
    ratings.addRating(4.0);
    ratings.addComment("Great doctor!");
    
    ASSERT_EQ(ratings.getTotalReviews(), 1);
    ASSERT_NEAR(ratings.averageRating(), 4.0, 0.001);
}

TEST(RatingsTest, DisplayReviews)
{
    Ratings ratings;
    ratings.addRating(4.0);
    ratings.addRating(3.5);

    ratings.addComment("Good experience");
    ratings.addComment("Decent service");

    ASSERT_EQ(ratings.getTotalReviews(), 2);
    ASSERT_NEAR(ratings.averageRating(), 3.75, 0.001);

    //capture output
    testing::internal::CaptureStdout();
    ratings.displayReviews();
    std::string output = testing::internal::GetCapturedStdout();

    // check if the correct review text is found
    ASSERT_TRUE(output.find("Review #1: Good experience") != std::string::npos);
    ASSERT_TRUE(output.find("Review #2: Decent service") != std::string::npos);
}

TEST(RatingsTest, EditReview)
{
    Ratings ratings;

    // Add initial ratings
    ratings.addRating(4.0);  // Rating 4
    ratings.addRating(2.5);  // Rating 2.5

    // Add comments
    ratings.addComment("Good service.");
    ratings.addComment("Needs improvement.");

    // Edit the first review
    ratings.editReview(0, 5.0, "Excellent service!");  // New rating and new comment

    // Check that the first rating was updated
    ASSERT_EQ(ratings.averageRating(), 3.75);  // New average should be (5.0 + 2.5) / 2 = 3.75

    // Check if the comment was updated
    testing::internal::CaptureStdout();
    ratings.displayReviews();
    std::string output = testing::internal::GetCapturedStdout();
    ASSERT_TRUE(output.find("Review #1: Excellent service!") != std::string::npos);
    ASSERT_TRUE(output.find("Review #2: Needs improvement.") != std::string::npos);
}

TEST(RatingsTest, AddZeroRating)
{
    Ratings ratings;
    ratings.addRating(0.0);

    ASSERT_EQ(ratings.getTotalReviews(), 1);
    ASSERT_NEAR(ratings.averageRating(), 0.0, 0.001);  // Average should be 0
}

TEST(RatingsTest, AddMaxRating)
{
    Ratings ratings;

    // Adding a rating of 5
    ratings.addRating(5.0);

    // Check total reviews and average
    ASSERT_EQ(ratings.getTotalReviews(), 1);
    ASSERT_EQ(ratings.averageRating(), 5.0);  // Average should be 5
}
