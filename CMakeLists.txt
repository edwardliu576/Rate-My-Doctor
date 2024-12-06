cmake_minimum_required(VERSION 3.2)

project(RateMyDoctor)

add_subdirectory(googletest)

add_executable(userratingTests userratingtests.cpp userratings.cpp account.cpp doctor.cpp doctordatabase.cpp print.cpp ratings.cpp user.cpp)

target_link_libraries(userratingTests gtest gtest_main)
