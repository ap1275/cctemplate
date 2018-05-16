cmake_minimum_required(VERSION 3.7.2)

#set(CMAKE_C_COMPILER "/usr/local/bin/clang" CACHE string "clang compiler" FORCE)
#set(CMAKE_CXX_COMPILER "/usr/local/bin/clang++" CACHE string "clang++ compiler" FORCE)

set(CMAKE_CXX_FLAGS_DEBUG "" CACHE STRING "" FORCE)
set(CMAKE_CXX_FLAGS_RELEASE "" CACHE STRING "" FORCE)

add_definitions("-Wall")
add_definitions("-std=c++17")
add_definitions("-msse4.2")
add_definitions("-mavx")

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
  add_definitions("-ggdb3")
  add_definitions("-O0")
elseif(CMAKE_BUILD_TYPE STREQUAL "Release")
  add_definitions("-O2")
endif(CMAKE_BUILD_TYPE STREQUAL "Debug")

project(libra)

add_subdirectory(test)