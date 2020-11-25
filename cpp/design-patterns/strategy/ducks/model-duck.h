#ifndef CPP_DESIGN_PATTERNS_STRATEGY_DUCKS_MODEL_DUCK_H_
#define CPP_DESIGN_PATTERNS_STRATEGY_DUCKS_MODEL_DUCK_H_

#include<iostream>

#include "cpp/design-patterns/strategy/ducks/duck.h"
#include "cpp/design-patterns/strategy/quack-behaviors/mute-quack.h"
#include "cpp/design-patterns/strategy/fly-behaviors/no-fly.h"

namespace strategy_pattern {

class ModelDuck : public Duck {
 public:
  ModelDuck() {
    quack_behavior_ = new MuteQuack();
    fly_behavior_ = new NoFly();
  }
};

}  // namespace strategy_pattern

#endif // CPP_DESIGN_PATTERNS_STRATEGY_DUCKS_MODEL_DUCK_H_