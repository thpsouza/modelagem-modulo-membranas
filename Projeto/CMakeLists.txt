cmake_minimum_required(VERSION 3.27)
project(Projeto)

set(CMAKE_CXX_STANDARD 17)

#set(Matplot++_DIR "C:\\Users\\EQ\\.vcpkg-clion\\vcpkg\\packages\\matplotplusplus_x64-mingw-dynamic\\share\\matplot++")
#set(nodesoup_DIR "C:\\Users\\EQ\\.vcpkg-clion\\vcpkg\\packages\\nodesoup_x64-mingw-dynamic\\share\\nodesoup")
#set(cimg_DIR "C:\\Users\\EQ\\.vcpkg-clion\\vcpkg\\packages\\cimg_x64-mingw-dynamic\\share\\cimg")

add_executable(Projeto main.cpp
        Geometria/geometria.cpp
        Geometria/geometria.h
        Gerais/base.cpp
        Gerais/base.h
        Mistura/mistura.cpp
        Mistura/mistura.h
        Mistura/especies.h
        Gerais/gerais.h
        Gerais/gerais.cpp)


## MATPLOTLIBCPP
find_package(Python3 COMPONENTS Interpreter Development NumPy REQUIRED)
include_directories(${PYTHON3_INCLUDE_DIRS} ${NumPy_INCLUDE_DIRS})
target_link_libraries(Projeto PRIVATE ${PYTHON_LIBRARIES} Python3::NumPy)

## MATPLOT++
#find_package(Matplot++ CONFIG REQUIRED)
#target_link_libraries(Projeto PRIVATE Matplot++::cimg Matplot++::matplot)
