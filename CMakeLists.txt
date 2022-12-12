cmake_minimum_required(VERSION 3.20)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
project(app)

add_executable(${PROJECT_NAME} src/main.cpp
src/klasa_auto.hpp
src/klasa_auto.cpp
src/klasa_ciagnik.hpp
src/klasa_ciagnik.cpp)

