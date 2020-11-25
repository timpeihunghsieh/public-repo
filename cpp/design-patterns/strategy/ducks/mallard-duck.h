#ifndef CPP_DESIGN_PATTERNS_STRATEGY_DUCKS_MALLARD_DUCK_H_
#define CPP_DESIGN_PATTERNS_STRATEGY_DUCKS_MALLARD_DUCK_H_

#include<iostream>

#include "cpp/design-patterns/strategy/ducks/duck.h"
#include "cpp/design-patterns/strategy/quack-behaviors/normal-quack.h"
#include "cpp/design-patterns/strategy/fly-behaviors/fly-with-wings.h"

namespace strategy_pattern {

class MallardDuck : public Duck {
 public:
  MallardDuck() {
    quack_behavior_ = new NormalQuack();
    fly_behavior_ = new FlyWithWings();
  }
};

}  // namespace strategy_pattern

#endif // CPP_DESIGN_PATTERNS_STRATEGY_DUCKS_MALLARD_DUCK_H_