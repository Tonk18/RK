#ifndef STRATEGY_H
#define STRATEGY_H

#include <iostream>
#include <memory>

class Strategy {
public:
    Strategy() = default;
    virtual ~Strategy() = default;  
    virtual void algorithmInterface() = 0;
};

class ConcreteStrategyA : public Strategy {
public:
    ConcreteStrategyA() = default;
    void algorithmInterface() override {
        std::cout << "algorithmInterfaceA" << std::endl;
    }
};

class ConcreteStrategyB : public Strategy {
public:
    ConcreteStrategyB() = default;
    void algorithmInterface() override {
        std::cout << "algorithmInterfaceB" << std::endl;
    }
};

class Context {
public:
    explicit Context(std::unique_ptr<Strategy> strategy) : strategy_(std::move(strategy)) {}
    void contextInterface() {
        strategy_->algorithmInterface();
    }
private:
    std::unique_ptr<Strategy> strategy_;
};

#endif 
