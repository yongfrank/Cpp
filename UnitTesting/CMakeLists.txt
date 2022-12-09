/*
 * @Author: Frank Chu
 * @Date: 2022-12-02 12:01:47
 * @LastEditors: Frank Chu
 * @LastEditTime: 2022-12-08 20:00:59
 * @FilePath: /Cpp/UnitTesting/CMakeLists.txt
 * @Description: 
 * 
 * Copyright (c) 2022 by Frank Chu, All Rights Reserved. 
 */
cmake_minimum_required(VERSION 3.8)

set(This Example)

project(${This} C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

add_subdirectory(googletest)

set(Headers
    Example.hpp
)
set(Sources
    Example.cpp
)

add_library(${This} STATIC ${Sources} ${Headers})

add_subdirectory(test)