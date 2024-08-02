cmake_minimum_required(VERSION 3.10)
project(TicTacToe)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${CMAKE_SOURCE_DIR})

add_executable(TicTacToe
    main.cpp
    Game.cpp
    Player.cpp
    AIPlayer.cpp
    HumanPlayer.cpp
)