#ifndef CPP_DESIGN_PATTERNS_STRATEGY_QUACK_BEHAVIORS_QUACK_BEHAVIOR_H_
#define CPP_DESIGN_PATTERNS_STRATEGY_QUACK_BEHAVIORS_QUACK_BEHAVIOR_H_

#include<iostream>

namespace strategy_pattern {

class QuackBehavior {
 public:
  virtual void Quack() = 0;
};

}  // namespace strategy_pattern

#endif // CPP_DESIGN_PATTERNS_STRATEGY_QUACK_BEHAVIORS_QUACK_BEHAVIOR_H_