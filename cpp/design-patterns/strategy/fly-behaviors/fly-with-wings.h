#ifndef CPP_DESIGN_PATTERNS_STRATEGY_FLY_BEHAVIORS_FLY_WITH_WINGS_H_
#define CPP_DESIGN_PATTERNS_STRATEGY_FLY_BEHAVIORS_FLY_WITH_WINGS_H_

#include<iostream>

namespace strategy_pattern {

class FlyWithWings : public FlyBehavior {
 public:
  void Fly() override {
    std::cout << "Flying in the Sky!" << std::endl;
  }
};

}  // namespace strategy_pattern

#endif // CPP_DESIGN_PATTERNS_STRATEGY_FLY_BEHAVIORS_FLY_WITH_WINGS_H_