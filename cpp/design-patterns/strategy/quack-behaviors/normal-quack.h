#ifndef CPP_DESIGN_PATTERNS_STRATEGY_QUACK_BEHAVIORS_QUACK_H_
#define CPP_DESIGN_PATTERNS_STRATEGY_QUACK_BEHAVIORS_QUACK_H_

#include<iostream>

namespace strategy_pattern {

class NormalQuack : public QuackBehavior {
 public:
  void Quack() override {
    std::cout << "Quack" << std::endl;
  }
};

}  // namespace strategy_pattern

#endif // CPP_DESIGN_PATTERNS_STRATEGY_QUACK_BEHAVIORS_QUACK_H_