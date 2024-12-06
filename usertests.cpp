#include "gtest/gtest.h"
#include "user.hpp"
#include "doctor.h"
#include "ratings.h"

TEST(UserTest, AddToFavorites) {
    Doctor doctor("9876543210", "Dr. Bob Johnson", "bob", "password456", "MD", "Orthopedics", true, "Central Clinic", "789 Pine St, City, State", "67890", "987-654-3210");
    User user("Alice Brown", "alice_brown", "password456", "456 Oak St, City, State", "67890");

    user.addToFavorites(doctor);

    ASSERT_EQ(user.getFavoriteDoctors().size(), 1);
    ASSERT_TRUE(user.getFavoriteDoctors()[0].getName() == "Dr. Bob Johnson");
}

TEST(UserTest, LeaveReview) {
    Doctor doctor("1029384756", "Dr. Sarah Miller", "sarah", "mypassword123", "MD", "Dermatology", true, "Sunshine Skin Clinic", "123 Maple Ave, City, State", "12345", "321-654-9870");
    User user("Ethan Green", "ethan_green", "securepass789", "321 Birch St, City, State", "12345");

    user.getUserReviews().addRating(4.5);  
    user.getUserReviews().addComment("Very professional, helped with my skin condition.");

    ASSERT_EQ(user.getUserReviews().getTotalReviews(), 1);
    ASSERT_NEAR(user.getUserReviews().averageRating(), 4.5, 0.001);
    ASSERT_TRUE(user.getUserReviews().getComments()[0] == "Very professional, helped with my skin condition.");
}

TEST(UserTest, GetUserReviews) {
    Doctor doctor("1122334455", "Dr. Emma Thompson", "emma", "password789", "MD", "Cardiology", true, "Heart Care Clinic", "987 Elm St, City, State", "23456", "555-123-4567");
    User user("Olivia White", "olivia_white", "password321", "654 Pine St, City, State", "23456");

    Ratings& reviews = user.getUserReviews();

    ASSERT_EQ(reviews.getTotalReviews(), 0);

    reviews.addRating(4.0);
    reviews.addComment("Experienced doctor, very helpful and knowledgeable.");

    ASSERT_EQ(reviews.getTotalReviews(), 1);
    ASSERT_NEAR(reviews.averageRating(), 4.0, 0.001);
    ASSERT_TRUE(reviews.getComments()[0] == "Experienced doctor, very helpful and knowledgeable.");

    ASSERT_EQ(user.getUserReviews().getTotalReviews(), 1);
    ASSERT_NEAR(user.getUserReviews().averageRating(), 4.0, 0.001);
    ASSERT_TRUE(user.getUserReviews().getComments()[0] == "Experienced doctor, very helpful and knowledgeable.");
}