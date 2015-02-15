project( command )
cmake_minimum_required( VERSION 2.8 )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11" )

add_library( ${PROJECT_NAME} STATIC ${SRC_LIST}
   Command.h
   Command.cpp
)

target_include_directories( ${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/.. )

