project(th-generate-permutations)

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif ()
set(CMAKE_CXX_FLAGS "-Wall -Wextra")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 14)
include_directories(src)

file(GLOB_RECURSE SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
file(GLOB_RECURSE HEADER_FILES ${CMAKE_CURRENT_SOURCE_DIR}/src/*.hh)

add_executable(th-generate-permutations ${SOURCE_FILES} ${HEADER_FILES})