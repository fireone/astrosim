project( model )
cmake_minimum_required( VERSION 2.8 )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11" )

add_library( ${PROJECT_NAME} STATIC ${SRC_LIST}
   AI.h
   AI.cpp
   AbstractActor.h
   AbstractActor.cpp
   Asteroid.h
   Asteroid.cpp
   Model.h
   Model.cpp
   Environment.h
   Environment.cpp
   IActor.h
   ICommandGenerator.h
)

target_include_directories( ${PROJECT_NAME} PUBLIC
                            ${CMAKE_CURRENT_SOURCE_DIR}/.. )

