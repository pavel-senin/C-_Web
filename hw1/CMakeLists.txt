cmake_minimum_required(VERSION 3.10)
project(MatchstickGame)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

add_executable(MatchstickGame main.cpp src/Game.cpp src/Player.cpp)
