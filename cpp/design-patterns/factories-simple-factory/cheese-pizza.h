#ifndef CPP_DESIGN_PATTERNS_FACTORIES_SIMPLE_FACTORY_CHESSE_PIZZA_H_
#define CPP_DESIGN_PATTERNS_FACTORIES_SIMPLE_FACTORY_CHESSE_PIZZA_H_

#include "cpp/design-patterns/factories-simple-factory/pizza.h"

namespace simple_factory_pattern {

class CheesePizza : public Pizza {
 public:
  CheesePizza() {}

  std::string GetName() override {
    return "Cheese Pizza";
  }
};

}  // namespace simple_factory_pattern

#endif // CPP_DESIGN_PATTERNS_FACTORIES_SIMPLE_FACTORY_CHESSE_PIZZA_H_