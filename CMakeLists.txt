cmake_minimum_required(VERSION 3.28)
project(hashtable)

set(CMAKE_CXX_STANDARD 17)

add_executable(hashtable main.cpp
        Hashtable.cpp
        Hashtable.h
        Node.cpp
        Node.h)
