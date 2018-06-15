set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

cmake_minimum_required(VERSION 3.2 FATAL_ERROR)
project(cpp_features VERSION 0.1 LANGUAGES CXX)

add_subdirectory(app)
add_subdirectory(libs)
