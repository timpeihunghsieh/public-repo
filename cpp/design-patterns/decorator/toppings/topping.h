#ifndef CPP_DESIGN_PATTERNS_DECORATOR_TOPPINGS_TOPPING_H_
#define CPP_DESIGN_PATTERNS_DECORATOR_TOPPINGS_TOPPING_H_

#include<memory>
#include "cpp/design-patterns/decorator/pizzas/pizza.h"

namespace decorator_pattern {

class Topping : public Pizza {
 public:
  Topping(Pizza* pizza) {
    pizza_.reset(pizza);
  }

 protected:
  // Own.
  std::unique_ptr<Pizza> pizza_;
};

}  // namespace decorator_pattern

#endif // CPP_DESIGN_PATTERNS_DECORATOR_TOPPINGS_TOPPING_H_