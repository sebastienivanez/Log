cmake_minimum_required(VERSION 3.5)
project(Log) # Project name
set(CMAKE_CXX_FLAGS "-Wextra -Wall -Werror -pedantic -std=c++11") # Compilation flags

file(GLOB FILES ${PROJECT_SOURCE_DIR}/src/*.c ${PROJECT_SOURCE_DIR}/src/*.h)

# Set the target name and source
add_executable(Log ${FILES})
