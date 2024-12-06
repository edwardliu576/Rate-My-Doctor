cmake_minimum_required(VERSION 3.2)

project(RateMyDoctor)

add_subdirectory(googletest)

add_executable(userDatabaseTests userDatabaseTests.cpp userdatabase.cpp user.cpp)

target_link_libraries(printTests gtest gtest_main)