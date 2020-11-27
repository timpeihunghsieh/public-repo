#ifndef CPP_DESIGN_PATTERNS_DECORATOR_PIZZAS_FARMHOUSE_PIZZA_H_
#define CPP_DESIGN_PATTERNS_DECORATOR_PIZZAS_FARMHOUSE_PIZZA_H_

#include "cpp/design-patterns/decorator/pizzas/pizza.h"

namespace decorator_pattern {

class FarmHousePizza : public Pizza {
 public:
  FarmHousePizza() {}
  int GetCost() override {
    return 10;
  }
};

}  // namespace decorator_pattern

#endif // CPP_DESIGN_PATTERNS_DECORATOR_PIZZAS_FARMHOUSE_PIZZA_H_