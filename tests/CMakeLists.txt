enable_testing()

find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(strategy_tests test_strategy.cpp)
target_link_libraries(strategy_tests
    strategy
    GTest::gtest
    GTest::gtest_main
    Threads::Threads
)

gtest_discover_tests(strategy_tests)
