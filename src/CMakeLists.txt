cmake_minimum_required(VERSION 3.7.2)

include_directories(internal-header)
include_directories(../include)

add_library(libra SHARED
  context.cc
)
