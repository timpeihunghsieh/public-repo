#ifndef CPP_DESIGN_PATTERNS_FACTORIES_FACTORY_METHOD_STORES_PIZZA_STORE_H_
#define CPP_DESIGN_PATTERNS_FACTORIES_FACTORY_METHOD_STORES_PIZZA_STORE_H_

#include <string>

#include "cpp/design-patterns/factories-factory-method/pizzas/pizza.h"

namespace factory_method_pattern {

class PizzaStore {
 public:
  PizzaStore() {}

  Pizza* OrderPizza(std::string type) {
    Pizza* pizza = CreatePizza(type);

    pizza->Prepare();
    pizza->Bake();
    pizza->Cut();
    pizza->Box();
    return pizza;
  }

  virtual Pizza* CreatePizza(std::string type) = 0;
};

}  // namespace factory_method_pattern

#endif // CPP_DESIGN_PATTERNS_FACTORIES_FACTORY_METHOD_STORES_PIZZA_STORE_H_