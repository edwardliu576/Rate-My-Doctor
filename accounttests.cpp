#include "account.h"
#include "data.h"
#include "doctor.h"
#include "doctordatabase.h"
#include "print.h"
#include "ratings.h"
#include "user.hpp"
#include "userdatabase.h"

#include <gtest/gtest.h>

//testing constructor and getter methods all together
TEST(AccountTest, ConstructorAndGetters) {
    Account acc("James Chapman", "programjames", "verynice", "382 Programming Ln", "25325");

    EXPECT_EQ(acc.getName(), "James Chapman");
    EXPECT_EQ(acc.getUsername(), "programjames");
    EXPECT_EQ(acc.getPassword(), "verynice");
    EXPECT_EQ(acc.getAddress(), "382 Programming Ln");
    EXPECT_EQ(acc.getZipcode(), "25325");
}

//testing edit methods/setters all together
TEST(AccountTest, EditMethods) {
    Account acc("Jack Berry", "ronaldisthebest", "password123", "Mickey Mouse Rd", "83745");

    acc.editName("David Springs");
    acc.editUsername("noronaldsucks");
    acc.editPassword("newpassword");
    acc.editAddress("596 Elm St");
    acc.editZipcode("51124");

    EXPECT_EQ(acc.getName(), "David Springs");
    EXPECT_EQ(acc.getUsername(), "noronaldsucks");
    EXPECT_EQ(acc.getPassword(), "newpassword");
    EXPECT_EQ(acc.getAddress(), "596 Elm St");
    EXPECT_EQ(acc.getZipcode(), "51124");
}

//testing editname function
TEST(AccountTest, EditName) {
    Account acc("Steve Jackson", "amazingman", "idontknow", "Boulder Blvd", "63475");

    acc.editName("New Name");
    EXPECT_EQ(acc.getName(), "New Name");
}

//testing editaddress function
TEST(AccountTest, EditAddress) {
    Account acc("Michael Jackson", "michaelcantsing", "tenorvoice", "HEEHEE St", "37534");

    acc.editAddress("796 Oak St");
    EXPECT_EQ(acc.getAddress(), "796 Oak St");
}

//testing editzipcode function
TEST(AccountTest, EditZipcode) {
    Account acc("A Person", "hellothere", "goodbye", "519 Main St", "57723");

    acc.editZipcode("97500");
    EXPECT_EQ(acc.getZipcode(), "97500");
}

//testing editusername function
TEST(AccountTest, EditUsername) {
    Account acc("Daniel Chavez", "invisibleman", "youcantseeme", "Invisibility Cloak Blvd", "15365");

    acc.editUsername("johnnydoe");
    EXPECT_EQ(acc.getUsername(), "johnnydoe");
}

//testing editpassword
TEST(AccountTest, EditPassword) {
    Account acc("Tom Ato", "afruit", "Anne Chovy", "961 Math Ln", "17355");

    // Edit password and check if the change is reflected
    acc.editPassword("newpassword");
    EXPECT_EQ(acc.getPassword(), "newpassword");
}