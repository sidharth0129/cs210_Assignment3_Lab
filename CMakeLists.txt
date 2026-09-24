cmake_minimum_required(VERSION 4.3)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled main.cpp
        shape_utility.cpp
        shape_utility.h
        node.h
        data.cpp
        data.h
        LinkedList.h
        ArrayList.h
        List.h
)
