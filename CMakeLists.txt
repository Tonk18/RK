find_package(GTest REQUIRED)
cmake_minimum_required(VERSION 3.10)
project(StrategyPattern LANGUAGES CXX) 


add_library(strategy STATIC 
    include/strategy.h
    src/strategy.cpp)  


add_executable(strategy_demo src/main.cpp)
target_link_libraries(strategy_demo strategy)


enable_testing()
add_subdirectory(tests)
