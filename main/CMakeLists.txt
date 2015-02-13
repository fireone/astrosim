project( main )
cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_executable (astro_sim main.cpp)

target_link_libraries(astro_sim LINK_PUBLIC game)
target_link_libraries(astro_sim LINK_PUBLIC view)
target_link_libraries(astro_sim LINK_PUBLIC model)
target_link_libraries(astro_sim LINK_PUBLIC utils)

include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/../../SDL2-2.0.3/i686-w64-mingw32/lib )

add_definitions(-DSDL_MAIN_HANDLED)


target_link_libraries(astro_sim LINK_PUBLIC C:/Users/linusgo/Desktop/pi/dev/SDL2-2.0.3/i686-w64-mingw32/lib/libSDL2.a
                                            C:/Users/linusgo/Desktop/pi/dev/SDL2-2.0.3/i686-w64-mingw32/lib/libSDL2main.a
                                            C:/Users/linusgo/Desktop/pi/dev/SDL2-2.0.3/i686-w64-mingw32/lib/libSDL2_image.a )

target_link_libraries(astro_sim LINK_PUBLIC ole32 oleaut32 imm32 winmm version)

