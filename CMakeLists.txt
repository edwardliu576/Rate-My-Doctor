cmake_minimum_required(VERSION 3.2)

project(RateMyDoctor)

add_subdirectory(googletest)

add_executable(rateMyDoctorAllTests doctordatabasetest.cpp account.cpp doctor.cpp doctordatabase.cpp print.cpp ratings.cpp user.cpp userRatings.cpp)

target_link_libraries(rateMyDoctorAllTests gtest gtest_main)