project( main )
cmake_minimum_required( VERSION 2.8 )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11" )

add_executable( astro_sim main.cpp )

#own libs
target_link_libraries( astro_sim LINK_PUBLIC game )
target_link_libraries( astro_sim LINK_PUBLIC view )
target_link_libraries( astro_sim LINK_PUBLIC model )
target_link_libraries( astro_sim LINK_PUBLIC command )
target_link_libraries( astro_sim LINK_PUBLIC utils )

#needed by SDL2
add_definitions(-DSDL_MAIN_HANDLED)

#3rd party libs
if( ${CMAKE_SYSTEM_NAME} MATCHES "Windows" )

    target_link_libraries(astro_sim LINK_PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../../SDL2-2.0.3/i686-w64-mingw32/lib/libSDL2.a
                                                ${CMAKE_CURRENT_SOURCE_DIR}/../../SDL2-2.0.3/i686-w64-mingw32/lib/libSDL2main.a
                                                ${CMAKE_CURRENT_SOURCE_DIR}/../../SDL2-2.0.3/i686-w64-mingw32/lib/libSDL2_image.a )

    target_link_libraries(astro_sim LINK_PUBLIC ole32 oleaut32 imm32 winmm version)

else( ${CMAKE_SYSTEM_NAME} MATCHES "Linux" )

    target_link_libraries( astro_sim LINK_PUBLIC SDL2 SDL2main SDL2_image )

endif()
