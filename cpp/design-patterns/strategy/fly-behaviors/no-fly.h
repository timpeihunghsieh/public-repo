#ifndef CPP_DESIGN_PATTERNS_STRATEGY_FLY_BEHAVIORS_NO_FLY_H_
#define CPP_DESIGN_PATTERNS_STRATEGY_FLY_BEHAVIORS_NO_FLY_H_

#include<iostream>

namespace strategy_pattern {

class NoFly : public FlyBehavior {
 public:
  void Fly() override {
    std::cout << "Walking on the ground...." << std::endl;
  }
};

}  // namespace strategy_pattern

#endif // CPP_DESIGN_PATTERNS_STRATEGY_FLY_BEHAVIORS_NO_FLY_H_