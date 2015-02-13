project(view)
cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_library(${PROJECT_NAME} STATIC ${SRC_LIST}
   View.h
   View.cpp
)

target_include_directories( ${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/..
                                                   ${CMAKE_CURRENT_SOURCE_DIR}/../../SDL2-2.0.3/i686-w64-mingw32/include )
