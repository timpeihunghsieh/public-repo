#ifndef CPP_DESIGN_PATTERNS_FACTORIES_FACTORY_METHOD_STORES_NY_STYLE_PIZZA_STORE_H_
#define CPP_DESIGN_PATTERNS_FACTORIES_FACTORY_METHOD_STORES_NY_STYLE_PIZZA_STORE_H_

#include <string>

#include "cpp/design-patterns/factories-factory-method/pizzas/ny-style-cheese-pizza.h"
#include "cpp/design-patterns/factories-factory-method/pizzas/ny-style-clam-pizza.h"
#include "cpp/design-patterns/factories-factory-method/pizzas/ny-style-veggie-pizza.h"
#include "cpp/design-patterns/factories-factory-method/stores/pizza-store.h"

namespace factory_method_pattern {

class NyStylePizzaStore : public PizzaStore {
 public:
  NyStylePizzaStore() {}

  Pizza* CreatePizza(std::string type) override {
    Pizza* pizza = nullptr;
    if (type == "cheese") {
      pizza = new NyStyleCheesePizza();
    } else if (type == "veggie") {
      pizza = new NyStyleVeggiePizza();
    } else if (type == "clam") {
      pizza = new NyStyleClamPizza();
    }
    return pizza;
  }
};

}  // namespace factory_method_pattern

#endif // CPP_DESIGN_PATTERNS_FACTORIES_FACTORY_METHOD_STORES_NY_STYLE_PIZZA_STORE_H_