cmake_minimum_required(VERSION 3.22)
project(tictactoe)

set(CMAKE_CXX_STANDARD 20)

add_executable(tictactoe main.cpp Game.cpp Game.h Player.cpp Player.h Board.cpp Board.h)
