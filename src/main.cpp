#include "strategy.h"

int main() {
    Context contextA(std::make_unique<ConcreteStrategyA>());
    contextA.contextInterface();
    
    Context contextB(std::make_unique<ConcreteStrategyB>());
    contextB.contextInterface();
    
    return 0;
}