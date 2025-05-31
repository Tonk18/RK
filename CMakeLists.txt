cmake_minimum_required(VERSION 3.10)
project(StrategyPattern LANGUAGES CXX)  # Явно указываем язык C++

# Основная библиотека
add_library(strategy STATIC 
    include/strategy.h
    src/strategy.cpp)  # Убедитесь, что файл существует

# Основной исполняемый файл
add_executable(strategy_demo src/main.cpp)
target_link_libraries(strategy_demo strategy)

# Тесты
enable_testing()
add_subdirectory(tests)
