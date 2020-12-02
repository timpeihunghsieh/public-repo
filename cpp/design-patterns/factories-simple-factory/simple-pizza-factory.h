#ifndef CPP_DESIGN_PATTERNS_FACTORIES_SIMPLE_FACTORY_SIMPLE_PIZZA_FACTORY_H_
#define CPP_DESIGN_PATTERNS_FACTORIES_SIMPLE_FACTORY_SIMPLE_PIZZA_FACTORY_H_

#include<string>

#include "cpp/design-patterns/factories-simple-factory/cheese-pizza.h"
#include "cpp/design-patterns/factories-simple-factory/veggie-pizza.h"

namespace simple_factory_pattern {

class SimplePizzaFactory {
 public:
  SimplePizzaFactory() {}

  Pizza* CreatePizza(std::string type) {
    if (type == "cheese") {
      return new CheesePizza();
    } else if (type == "veggie") {
      return new VeggiePizza();
    } else {
      return nullptr;
    }
  }
};

}  // namespace simple_factory_pattern

#endif // CPP_DESIGN_PATTERNS_FACTORIES_SIMPLE_FACTORY_SIMPLE_PIZZA_FACTORY_H_