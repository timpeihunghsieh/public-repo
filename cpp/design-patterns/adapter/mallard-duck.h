#ifndef CPP_DESIGN_PATTERNS_ADAPTER_MALLARD_DUCK_H
#define CPP_DESIGN_PATTERNS_ADAPTER_MALLARD_DUCK_H

#include <iostream>

#include "cpp/design-patterns/adapter/duck.h"

namespace adapter_pattern {

class MallardDuck : public Duck {
 public:
  MallardDuck() {}

  void Quack() override {
    std::cout << "Quack" << std::endl;
  }

  void Fly() override {
    std::cout << "I'm flying" << std::endl;
  }
};

}  // namespace adapter_pattern

#endif // CPP_DESIGN_PATTERNS_ADAPTER_MALLARD_DUCK_H