#ifndef CPP_DESIGN_PATTERNS_ADAPTER_WILD_TURKEY_H
#define CPP_DESIGN_PATTERNS_ADAPTER_WILD_TURKEY_H

#include <iostream>

#include "cpp/design-patterns/adapter/wild-turkey.h"

namespace adapter_pattern {

class WildTurkey : public Turkey {
 public:
  WildTurkey() {}

  void Gobble() override {
    std::cout << "Gobble gobble" << std::endl;
  }

  void Fly() override {
    std::cout << "I'm flying short distance" << std::endl;
  }
};

}  // namespace adapter_pattern

#endif // CPP_DESIGN_PATTERNS_ADAPTER_WILD_TURKEY_H