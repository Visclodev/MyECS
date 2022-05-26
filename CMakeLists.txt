cmake_minimum_required(VERSION 3.15)
project(my_project)

find_package(raylib 3.0 REQUIRED) # Requires at least version 3.0

set(CMAKE_CXX_STANDARD 20) # Requires C11 standard

FILE(GLOB_RECURSE SRCS src/*.cpp)

add_executable(${PROJECT_NAME} ${SRCS})

target_link_libraries(${PROJECT_NAME} raylib)