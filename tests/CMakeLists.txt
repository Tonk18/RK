add_executable(strategy_tests test_strategy.cpp)
target_link_libraries(strategy_tests 
    strategy
    GTest::GTest 
    GTest::Main
)
