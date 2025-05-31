cmake_minimum_required(VERSION 3.10)
project(StrategyPattern VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Добавляем путь к заголовкам
include_directories(include)

# Основная библиотека
add_library(strategy STATIC include/strategy.h)

# Основной исполняемый файл
add_executable(strategy_demo src/main.cpp)
target_link_libraries(strategy_demo strategy)

# Тесты
add_subdirectory(tests)
