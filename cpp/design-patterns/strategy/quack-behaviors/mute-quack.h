#ifndef CPP_DESIGN_PATTERNS_STRATEGY_QUACK_BEHAVIORs_MUTE_QUACK_H_
#define CPP_DESIGN_PATTERNS_STRATEGY_QUACK_BEHAVIORS_MUTE_QUACK_H_

#include<iostream>

namespace strategy_pattern {

class MuteQuack : public QuackBehavior {
 public:
  void Quack() override {
    std::cout << "<< Silence >>" << std::endl;
  }
};

}  // namespace strategy_pattern

#endif // CPP_DESIGN_PATTERNS_STRATEGY_QUACK_BEHAVIORS_MUTE_QUACK_H_