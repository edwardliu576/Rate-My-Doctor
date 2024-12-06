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
