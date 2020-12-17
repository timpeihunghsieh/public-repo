#ifndef CPP_DESIGN_PATTERNS_FACTORIES_ABSTRACT_FACTORY_STORES_PIZZA_STORE_H_
#define CPP_DESIGN_PATTERNS_FACTORIES_ABSTRACT_FACTORY_STORES_PIZZA_STORE_H_

#include <iostream>
#include <string>

#include "cpp/design-patterns/factories-abstract-factory/pizzas/pizza.h"

namespace abstract_factory_pattern {

class PizzaStore {
 public:
  PizzaStore() {}

  Pizza* OrderPizza(std::string type) {
    std::cout << "Order received at " << GetName() << std::endl;
    Pizza* pizza = CreatePizza(type);
    pizza->Prepare();
    pizza->Bake();
    pizza->Cut();
    pizza->Box();
    std::cout << "Order Done!" << std::endl;
    return pizza;
  }

  virtual std::string GetName() = 0;
  virtual Pizza* CreatePizza(std::string type) = 0;
};

}  // namespace abstract_factory_pattern

#endif // CPP_DESIGN_PATTERNS_FACTORIES_ABSTRACT_FACTORY_STORES_PIZZA_STORE_H_