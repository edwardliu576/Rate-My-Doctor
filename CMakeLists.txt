cmake_minimum_required(VERSION 3.2)

project(RateMyDoctor)

add_subdirectory(googletest)

<<<<<<< HEAD
add_executable(userTests usertests.cpp account.cpp data.cpp doctor.cpp doctordatabase.cpp print.cpp ratings.cpp user.cpp)

target_link_libraries(userTests gtest gtest_main)
=======
add_executable(userDatabaseTests userDatabaseTests.cpp userdatabase.cpp user.cpp)

target_link_libraries(printTests gtest gtest_main)
>>>>>>> fbb7ae0fa7f18478e5cba60e041f5bcb3394e064
