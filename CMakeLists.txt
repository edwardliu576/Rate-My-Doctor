cmake_minimum_required(VERSION 3.2)

project(RateMyDoctor)

add_subdirectory(googletest)

add_executable(userTests usertests.cpp account.cpp data.cpp doctor.cpp doctordatabase.cpp print.cpp ratings.cpp user.cpp)

target_link_libraries(userTests gtest gtest_main)