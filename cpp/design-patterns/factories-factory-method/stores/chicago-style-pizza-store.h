#ifndef CPP_DESIGN_PATTERNS_FACTORIES_FACTORY_METHOD_STORES_CHICAGO_STYLE_PIZZA_STORE_H_
#define CPP_DESIGN_PATTERNS_FACTORIES_FACTORY_METHOD_STORES_CHICAGO_STYLE_PIZZA_STORE_H_

#include <string>

#include "cpp/design-patterns/factories-factory-method/pizzas/chicago-style-cheese-pizza.h"
#include "cpp/design-patterns/factories-factory-method/stores/pizza-store.h"

namespace factory_method_pattern {

class ChicagoStylePizzaStore : public PizzaStore {
 public:
  ChicagoStylePizzaStore() {}

  Pizza* CreatePizza(std::string type) override {
    Pizza* pizza = nullptr;
    if (type == "cheese") {
      pizza = new ChicagoStyleCheesePizza();
    }
    return pizza;
  }
};

}  // namespace factory_method_pattern

#endif // CPP_DESIGN_PATTERNS_FACTORIES_FACTORY_METHOD_STORES_CHICAGO_STYLE_PIZZA_STORE_H_