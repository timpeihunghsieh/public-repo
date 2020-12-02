#ifndef CPP_DESIGN_PATTERNS_FACTORIES_SIMPLE_FACTORY_VEGGIE_PIZZA_H_
#define CPP_DESIGN_PATTERNS_FACTORIES_SIMPLE_FACTORY_VEGGIE_PIZZA_H_

#include "cpp/design-patterns/factories-simple-factory/pizza.h"

namespace simple_factory_pattern {

class VeggiePizza : public Pizza {
 public:
  VeggiePizza() {}

  std::string GetName() override {
    return "Veggie Pizza";
  }
};

}  // namespace simple_factory_pattern

#endif // CPP_DESIGN_PATTERNS_FACTORIES_SIMPLE_FACTORY_VEGGIE_PIZZA_H_