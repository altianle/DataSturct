cmake_minimum_required(VERSION 3.22)
project(DataStruct)

set(CMAKE_CXX_STANDARD 14)

include_directories(DataStruct)

add_executable(DataStruct
        DataStruct/src/main.cpp
        DataStruct/src/MyKMP.cpp
        DataStruct/head/MyKMP.h
        DataStruct/src/MySort.cpp
        DataStruct/head/MySort.h
        DataStruct/src/Nooperate.cpp
        DataStruct/head/Nooperate.h
        DataStruct/src/SerchOdd.cpp
        DataStruct/head/SerchOdd.h DataStruct/src/RoboWalk.cpp DataStruct/head/RoboWalk.h)
