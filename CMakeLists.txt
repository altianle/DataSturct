cmake_minimum_required(VERSION 3.22)
project(DataStruct)

set(CMAKE_CXX_STANDARD 14)

include_directories(DataStruct)

add_executable(DataStruct
        DataStruct/main.cpp
        DataStruct/MyKMP.cpp
        DataStruct/MyKMP.h
        DataStruct/MySort.cpp
        DataStruct/MySort.h
        DataStruct/Nooperate.cpp
        DataStruct/Nooperate.h
        DataStruct/SerchOdd.cpp
        DataStruct/SerchOdd.h)
