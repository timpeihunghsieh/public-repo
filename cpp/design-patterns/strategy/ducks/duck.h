#ifndef CPP_DESIGN_PATTERNS_STRATEGY_DUCKS_DUCK_H_
#define CPP_DESIGN_PATTERNS_STRATEGY_DUCKS_DUCK_H_

#include "cpp/design-patterns/strategy/fly-behaviors/fly-behavior.h"
#include "cpp/design-patterns/strategy/quack-behaviors/quack-behavior.h"

namespace strategy_pattern {

class Duck {
 public:
  Duck();
  void PerformQuack();
  void PerformFly();

 protected:
  // Owned
  QuackBehavior* quack_behavior_;

  // Owned
  FlyBehavior* fly_behavior_;
};

}  // namespace strategy_pattern

#endif // CPP_DESIGN_PATTERNS_STRATEGY_DUCKS_DUCK_H_