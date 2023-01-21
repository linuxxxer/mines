cmake_minimum_required(VERSION 3.22)
project(mines)

set(CMAKE_CXX_STANDARD 17)

add_executable(mines main.cpp Mines/Mines.h Mines/Mines.cpp)
