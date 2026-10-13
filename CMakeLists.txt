cmake_minimum_required(VERSION 3.27)
project(GameboyEmulator)

set(CMAKE_CXX_STANDARD 17)

FILE(GLOB SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/src/*)
FILE(GLOB HEADER_FILES ${CMAKE_CURRENT_SOURCE_DIR}/include/*)

GET_FILENAME_COMPONENT(MAIN ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp ABSOLUTE)

LIST(REMOVE_ITEM SRC_FILES MAIN)

add_library(GameboyLibrary ${SRC_FILES} ${HEADER_FILES})

add_executable(GameboyEmulator ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp)
target_link_libraries(GameboyEmulator GameboyLibrary)
