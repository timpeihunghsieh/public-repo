#ifndef CPP_DESIGN_PATTERNS_DECORATOR_TOPPINGS_BARBEQUE_H_
#define CPP_DESIGN_PATTERNS_DECORATOR_TOPPINGS_BARBEQUE_H_

#include "cpp/design-patterns/decorator/toppings/topping.h"

namespace decorator_pattern {

class Barbeque : public Topping {
 public:
  Barbeque(Pizza* pizza)
    : Topping(pizza) {}

  int GetCost() override {
    const int kBarbequeCost = 1;
    return kBarbequeCost + pizza_->GetCost();
  }
};

}  // namespace decorator_pattern

#endif // CPP_DESIGN_PATTERNS_DECORATOR_TOPPINGS_BARBEQUE_H_