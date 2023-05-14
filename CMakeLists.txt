cmake_minimum_required(VERSION 3.16)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -Wextra -pedantic")

project(XXXProject
        VERSION 0.1.0
        LANGUAGES CXX C)

#some usefull utilities
include(cmake/cppcheck.cmake)
AttachCppCheck()

option(BUILD_UNIT_TEST "Build unit test" ON)

add_subdirectory(src)

if(BUILD_UNIT_TEST)
    add_subdirectory(test)
endif(BUILD_UNIT_TEST)

