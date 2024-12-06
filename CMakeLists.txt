cmake_minimum_required(VERSION 3.2)

project(RateMyDoctor)

add_subdirectory(googletest)

add_executable(userratingTests userratingtests.cpp userratings.cpp account.cpp doctor.cpp doctordatabase.cpp print.cpp ratings.cpp user.cpp)

target_link_libraries(userratingTests gtest gtest_main)

add_executable(userDatabaseTests userDatabaseTests.cpp userdatabase.cpp account.cpp doctor.cpp doctordatabase.cpp print.cpp ratings.cpp user.cpp userRatings.cpp)

target_link_libraries(userDatabaseTests gtest gtest_main)

add_executable(rateMyDoctorAllTests doctordatabasetest.cpp account.cpp doctor.cpp doctordatabase.cpp print.cpp ratings.cpp user.cpp userRatings.cpp)

target_link_libraries(rateMyDoctorAllTests gtest gtest_main)

add_executable(userTests usertests.cpp account.cpp doctor.cpp doctordatabase.cpp print.cpp ratings.cpp user.cpp userRatings.cpp)

target_link_libraries(userTests gtest gtest_main)

add_executable(runAllTests
doctordatabasetest.cpp userDatabaseTests.cpp usertests.cpp userratings.cpp account.cpp doctor.cpp doctordatabase.cpp print.cpp ratings.cpp user.cpp userRatings.cpp userdatabase.cpp
)
target_link_libraries(runAllTests gtest gtest_main)
