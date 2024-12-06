#include "userdatabase.h"
#include "user.hpp"

#include <gtest/gtest.h>

// CONSTRUCTOR TESTS
TEST(UserDatabaseTest, constructor1) {
    EXPECT_NO_THROW({userDatabase data = userDatabase();});
}

// ADD NEW USER
TEST(UserDatabaseTest, addNewUser) {
    User personA = User("john smith", "jn", "jnpwd", "123 smith st", "12345");
    userDatabase data = userDatabase("users.cv");
    EXPECT_NO_THROW(data.addNewUser(personA));
}


// USERNAME EXISTS
TEST(UserDatabaseTest, usernameExists) {
    User personA = User("john smith", "jn", "jnpwd", "123 smith st", "12345");
    userDatabase data = userDatabase("users.cv");
    data.addNewUser(personA);
    EXPECT_TRUE(data.usernameExists("jn"));
}

TEST(UserDatabaseTest, usernameDoesNotExist) {
    User personA = User("john smith", "jn", "jnpwd", "123 smith st", "12345");
    userDatabase data = userDatabase("users.cv");
    data.addNewUser(personA);
    EXPECT_FALSE(data.usernameExists("bob"));
}

TEST(UserDatabaseTest, usernameDoesNotExist2) {
    User personA = User("john smith", "jn", "jnpwd", "123 smith st", "12345");
    userDatabase data = userDatabase("users.cv");
    data.addNewUser(personA);
    EXPECT_FALSE(data.usernameExists("john smith"));
}

// USER LOGIN
TEST(UserDatabaseTest, userLoginSuccess) {
    User personA = User("john smith", "jn", "jnpwd", "123 smith st", "12345");
    userDatabase data = userDatabase("users.cv");
    data.addNewUser(personA);
    User* login = data.userLogin("jn", "jnpwd");
    EXPECT_NE(login, nullptr);
}

TEST(UserDatabaseTest, userLoginFail1) {
    User personA = User("john smith", "jn", "jnpwd", "123 smith st", "12345");
    userDatabase data = userDatabase("users.cv");
    data.addNewUser(personA);
    User* login = data.userLogin("hi", "bye");
    EXPECT_NE(login, personA);
}

TEST(UserDatabaseTest, userLoginFail2) {
    userDatabase data = userDatabase("users.cv");
    User* login = data.userLogin("username", "password");
    EXPECT_EQ(login, nullptr);
}
