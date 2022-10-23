cmake_minimum_required(VERSION 3.23)
project(Projet)

set(CMAKE_CXX_STANDARD 11)

add_executable(Projet
        main.cpp GameBoard.cpp Tetravex.cpp)

add_compile_options("-v")
