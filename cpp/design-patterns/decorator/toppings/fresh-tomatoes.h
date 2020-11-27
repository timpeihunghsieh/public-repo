#ifndef CPP_DESIGN_PATTERNS_DECORATOR_TOPPINGS_FRESH_TOMATOES_H_
#define CPP_DESIGN_PATTERNS_DECORATOR_TOPPINGS_FRESH_TOMATOES_H_

#include "cpp/design-patterns/decorator/toppings/topping.h"

namespace decorator_pattern {

class FreshTomatoes : public Topping {
 public:
  FreshTomatoes(Pizza* pizza)
    : Topping(pizza) {}

  int GetCost() override {
    const int kFreshTomatoesCost = 2;
    return kFreshTomatoesCost + pizza_->GetCost();
  }
};

}  // namespace decorator_pattern

#endif // CPP_DESIGN_PATTERNS_DECORATOR_TOPPINGS_FRESH_TOMATOES_H_