// #include "account.h"
#include "doctor.h"

#include <gtest/gtest.h>
//now moving on to testing the doctor class

//testing if constructor works correctly
TEST(DoctorTest, ConstructorInitializesCorrectly) {
    Doctor doc("1234567890", "Dr. Emily Carter", "ecarter", "securePwd123", "MD", "Cardiology", true, "Saint Mary's Hospital", "2500 Health Blvd", "90210", "555-9876");

    EXPECT_EQ(doc.getNPI(), "1234567890");
    EXPECT_EQ(doc.getName(), "Dr. Emily Carter");
    EXPECT_EQ(doc.getUsername(), "ecarter");
    EXPECT_EQ(doc.getPassword(), "securePwd123");
    EXPECT_EQ(doc.getCred(), "MD");
    EXPECT_EQ(doc.getSpecialty(), "Cardiology");
    EXPECT_TRUE(doc.getTele());
    EXPECT_EQ(doc.getFacility(), "Saint Mary's Hospital");
    EXPECT_EQ(doc.getAddress(), "2500 Health Blvd");
    EXPECT_EQ(doc.getZipcode(), "90210");
    EXPECT_EQ(doc.getPhone(), "555-9876");
}

//testing editspecialty function
TEST(DoctorTest, EditSpecialty) {
    Doctor doc("1234567890", "Dr. Emily Carter", "ecarter", "securePwd123", "MD", "Cardiology", true, "Saint Mary's Hospital", "2500 Health Blvd", "90210", "555-9876");

    doc.editSpecialty("Neurology");
    EXPECT_EQ(doc.getSpecialty(), "Neurology");
}

//testing edithospital function
TEST(DoctorTest, EditHospital) {
    Doctor doc("1234567890", "Dr. Emily Carter", "ecarter", "securePwd123", "MD", "Cardiology", true, "Saint Mary's Hospital", "2500 Health Blvd", "90210", "555-9876");

    doc.editHospital("Lakeside Medical Center");
    EXPECT_EQ(doc.getFacility(), "Lakeside Medical Center");
}

//testing getter functions
TEST(DoctorTest, GetterFunctions) {
    Doctor doc("1234567890", "Dr. Emily Carter", "ecarter", "securePwd123", "MD", "Cardiology", true, "Saint Mary's Hospital", "2500 Health Blvd", "90210", "555-9876");

    EXPECT_EQ(doc.getNPI(), "1234567890");
    EXPECT_EQ(doc.getCred(), "MD");
    EXPECT_EQ(doc.getSpecialty(), "Cardiology");
    EXPECT_TRUE(doc.getTele());
    EXPECT_EQ(doc.getFacility(), "Saint Mary's Hospital");
    EXPECT_EQ(doc.getPhone(), "555-9876");
}

//testing telehealth status
TEST(DoctorTest, TelehealthStatus) {
    //in this case, the telehealth set to true
    Doctor doc1("1234567890", "Dr. Emily Carter", "ecarter", "securePwd123", "MD", "Cardiology", true, "Saint Mary's Hospital", "2500 Health Blvd", "90210", "555-9876");
    EXPECT_TRUE(doc1.getTele());

    //in this case, it's set to false
    Doctor doc2("0987654321", "Dr. Alexander Hayes", "ahayes", "newPwd456", "DO", "Pediatrics", false, "Greenwich Medical Group", "4887 Elm St", "10345", "555-2468");
    EXPECT_FALSE(doc2.getTele());
}

// test the Doctor's inheritance of Account
TEST(DoctorTest, CombinedAccountDoctor) {
    Doctor doc("1234567890", "Dr. Emily Carter", "ecarter", "securePwd123", "MD", "Cardiology", true, "Saint Mary's Hospital", "2500 Health Blvd", "90210", "555-9876");

    //testing the inherited Account fields through Doctor
    EXPECT_EQ(doc.getName(), "Dr. Emily Carter");
    EXPECT_EQ(doc.getUsername(), "ecarter");
    EXPECT_EQ(doc.getPassword(), "securePwd123");
    EXPECT_EQ(doc.getAddress(), "2500 Health Blvd");
    EXPECT_EQ(doc.getZipcode(), "90210");

    //now test the Doctor-specific fields
    EXPECT_EQ(doc.getNPI(), "1234567890");
    EXPECT_EQ(doc.getCred(), "MD");
    EXPECT_EQ(doc.getSpecialty(), "Cardiology");
    EXPECT_TRUE(doc.getTele());
    EXPECT_EQ(doc.getFacility(), "Saint Mary's Hospital");
    EXPECT_EQ(doc.getPhone(), "555-9876");
}