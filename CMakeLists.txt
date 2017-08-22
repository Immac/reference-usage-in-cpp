cmake_minimum_required(VERSION 3.8)
project(game_example)
SET(CMAKE_INSTALL_PREFIX "d:/workspace/install")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wno-long-long -pedantic")
set(SOURCE_FILES main.cpp GameLoop.cpp GameLoop.h Window.cpp Window.h)
add_executable(game_example ${SOURCE_FILES} GameLoop.cpp GameLoop.h)
# Detect and add SFML
set(CMAKE_MODULE_PATH "${CMAKE_INSTALL_PREFIX}/sfml/cmake/Modules" ${CMAKE_MODULE_PATH})
message("${CMAKE_INSTALL_PREFIX}/sfml/cmake/Modules")
#Find any version 2.X of SFML
#See the FindSFML.cmake file for additional details and instructions
set (SFML_ROOT ${CMAKE_INSTALL_PREFIX}/sfml)
find_package(SFML 2 REQUIRED system window graphics network audio)
if(SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(${PROJECT_NAME} ${SFML_LIBRARIES})
endif()
#End of SFML