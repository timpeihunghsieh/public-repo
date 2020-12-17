#ifndef CPP_DESIGN_PATTERNS_FACTORIES_ABSTRACT_FACTORY_STORES_CHICAGO_STYLE_PIZZA_STORE_H_
#define CPP_DESIGN_PATTERNS_FACTORIES_ABSTRACT_FACTORY_STORES_CHICAGO_STYLE_PIZZA_STORE_H_

#include <string>

#include "cpp/design-patterns/factories-abstract-factory/ingredient-factories/chicago-ingredient-factory.h"
#include "cpp/design-patterns/factories-abstract-factory/pizzas/cheese-pizza.h"
#include "cpp/design-patterns/factories-abstract-factory/pizzas/clam-pizza.h"
#include "cpp/design-patterns/factories-abstract-factory/stores/pizza-store.h"

namespace abstract_factory_pattern {

class ChicagoStylePizzaStore : public PizzaStore {
 public:
  ChicagoStylePizzaStore() {}

  std::string GetName() override {
    return "ChicagoStylePizzaStore";
  }

  Pizza* CreatePizza(std::string type) override {
    Pizza* pizza = nullptr;
    IngredientFactory* ingredient_factory = new ChicagoIngredientFactory();
    if (type == "cheese") {
      pizza = new CheesePizza(ingredient_factory);
    } else {
      return nullptr;
    }
    return pizza;
  }
};

}  // namespace abstract_factory_pattern

#endif // CPP_DESIGN_PATTERNS_FACTORIES_ABSTRACT_FACTORY_STORES_CHICAGO_STYLE_PIZZA_STORE_H_