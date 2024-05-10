cmake_minimum_required(VERSION 3.27)
project(Projeto)

set(CMAKE_CXX_STANDARD 17)

add_executable(Projeto main.cpp
        Geometria/geometria.cpp
        Geometria/geometria.h
        Gerais/base.cpp
        Gerais/base.h
        Mistura/especies.cpp
        Mistura/especies.h)
