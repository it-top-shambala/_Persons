cmake_minimum_required(VERSION 3.25)
project(Persons)

set(CMAKE_CXX_STANDARD 17)

add_executable(Persons main.cpp lib/AbstractName.h lib/AbstractAddress.h lib/Phone.h lib/Person.h lib/names/RussianName.h lib/names/EuropeName.h lib/addresses/RussianAddress.h)
