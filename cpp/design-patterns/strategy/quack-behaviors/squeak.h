#ifndef CPP_DESIGN_PATTERNS_STRATEGY_QUACK_BEHAVIORS_SQUEAK_H_
#define CPP_DESIGN_PATTERNS_STRATEGY_QUACK_BEHAVIORS_SQUEAK_H_

#include<iostream>

namespace strategy_pattern {

class Squeak : public QuackBehavior {
 public:
  void Quack() override {
    std::cout << "Squeak" << std::endl;
  }
};

}  // namespace strategy_pattern

#endif // CPP_DESIGN_PATTERNS_STRATEGY_QUACK_BEHAVIORS_SQUEAK_H_