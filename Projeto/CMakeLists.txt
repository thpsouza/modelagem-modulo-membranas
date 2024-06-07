cmake_minimum_required(VERSION 3.27)
project(Projeto)

set(CMAKE_CXX_STANDARD 17)

set(Matplot++_DIR "C:\\Users\\EQ\\.vcpkg-clion\\vcpkg\\packages\\matplotplusplus_x64-mingw-dynamic\\share\\matplot++")
set(nodesoup_DIR "C:\\Users\\EQ\\.vcpkg-clion\\vcpkg\\packages\\nodesoup_x64-mingw-dynamic\\share\\nodesoup")

add_executable(Projeto main.cpp
        Geometria/geometria.cpp
        Geometria/geometria.h
        Gerais/base.cpp
        Gerais/base.h
        Mistura/mistura.cpp
        Mistura/mistura.h
        Mistura/especies.h
        Gerais/gerais.h)


find_package(Matplot++ CONFIG REQUIRED)
target_link_libraries(Projeto PRIVATE Matplot++::cimg  Matplot++::matplot)
