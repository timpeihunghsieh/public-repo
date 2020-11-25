#ifndef CPP_DESIGN_PATTERNS_STRATEGY_FLY_BEHAVIORS_FLY_BEHAVIOR_H_
#define CPP_DESIGN_PATTERNS_STRATEGY_FLY_BEHAVIORS_FLY_BEHAVIOR_H_

#include<iostream>

namespace strategy_pattern {

class FlyBehavior {
 public:
  virtual void Fly() = 0;
};

}  // namespace strategy_pattern

#endif // CPP_DESIGN_PATTERNS_STRATEGY_FLY_BEHAVIORS_FLY_BEHAVIOR_H_