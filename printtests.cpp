//testing the print class
#include "print.h"
#include "ratings.h"

#include <gtest/gtest.h>
//testing printing the doctor's information
TEST(PrintTest, PrintDocInformation) {
    Doctor doctor("1234567890", "Dr. Alice Smith", "alice", "password123", "MD", "Pediatrics", true, "City Hospital", "456 Oak St, City, State", "54321", "123-987-6543");

    //this captures the output
    testing::internal::CaptureStdout();

    Print print;
    print.printDocInformation(doctor);

    //turn the captured output into a string
    string output = testing::internal::GetCapturedStdout();

    string expectedOutput =
        "Doctor Information: \n"
        "Name: Dr. Alice Smith\n"
        "NPI: 1234567890\n"
        "Credential: MD\n"
        "Speciality: Pediatrics\n"
        "Telehealth Available?: Yes\n"
        "Facility: City Hospital\n"
        "Address: 456 Oak St, City, State\n"
        "Zipcode: 54321\n"
        "Phone: 123-987-6543\n\n";

    ASSERT_EQ(output, expectedOutput);
}

//testing printing the doctor's login information
TEST(PrintTest, PrintDocLoginInformation) {
    Doctor doctor("1234567890", "Dr. Alice Smith", "alice", "password123", "MD", "Pediatrics", true, "City Hospital", "456 Oak St, City, State", "54321", "123-987-6543");

    //capture output
    testing::internal::CaptureStdout();

    Print print;
    print.printDocLoginInformation(doctor);

    //get the captured output
    string output = testing::internal::GetCapturedStdout();

    string expectedOutput =
        "Doctor Settings: \n"
        "Username: alice\n"
        "Password: password123\n"
        "NPI: 1234567890\n"
        "Name: Dr. Alice Smith\n"
        "Credential: MD\n"
        "Speciality: Pediatrics\n"
        "Address: 456 Oak St, City, State\n"
        "Zipcode: 54321\n"
        "Facility: City Hospital\n"
        "Phone: 123-987-6543\n";

    ASSERT_EQ(output, expectedOutput);
}

//testing printing the user's login information
TEST(PrintTest, PrintUserLoginInformation) {
    User user("John Doe", "john_doe", "johnpassword", "123 Elm St, City, State", "54321");

    //capture output
    testing::internal::CaptureStdout();

    Print print;
    print.printUserLoginInformation(user);

    //get the captured output
    string output = testing::internal::GetCapturedStdout();

    string expectedOutput =
        "User Settings: \n"
        "Username: john_doe\n"
        "Password: johnpassword\n"
        "Name: John Doe\n"
        "Address: 123 Elm St, City, State\n"
        "Zipcode: 54321\n";

    ASSERT_EQ(output, expectedOutput);
}