#include "strategy.h"
#include <gtest/gtest.h>

TEST(StrategyTest, ConcreteStrategyA) {
    ConcreteStrategyA strategyA;
    testing::internal::CaptureStdout();
    strategyA.algorithmInterface();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "algorithmInterfaceA\n");
}

TEST(StrategyTest, ConcreteStrategyB) {
    ConcreteStrategyB strategyB;
    testing::internal::CaptureStdout();
    strategyB.algorithmInterface();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "algorithmInterfaceB\n");
}

TEST(ContextTest, ContextInterface) {
    Context context(std::make_unique<ConcreteStrategyA>());
    testing::internal::CaptureStdout();
    context.contextInterface();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "algorithmInterfaceA\n");
}