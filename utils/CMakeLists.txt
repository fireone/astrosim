project( utils )
cmake_minimum_required( VERSION 2.8 )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11" )

add_library( ${PROJECT_NAME} STATIC ${SRC_LIST}
   IObservable.h
   IObserver.h
   Pos2d.h
   Pos2d.cpp
)

target_include_directories( ${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/.. )

