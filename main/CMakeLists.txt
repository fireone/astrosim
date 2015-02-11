project(main)
cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_executable (astro_sim main.cpp)

target_link_libraries (astro_sim LINK_PUBLIC game)
target_link_libraries (astro_sim LINK_PUBLIC view)
target_link_libraries (astro_sim LINK_PUBLIC model)
target_link_libraries (astro_sim LINK_PUBLIC utils)
