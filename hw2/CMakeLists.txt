cmake_minimum_required(VERSION 3.10)
project(MatchstickGame)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

add_library(player STATIC
    src/Player.cpp
)
add_library(game STATIC
    src/Game.cpp
)

add_executable(MatchstickGame src/main.cpp)

target_include_directories(MatchstickGame PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})