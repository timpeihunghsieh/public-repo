#ifndef CPP_DESIGN_PATTERNS_FACTORIES_FACTORY_METHOD_PIZZAS_CHICAGO_STYLE_CHEESE_PIZZA_H_
#define CPP_DESIGN_PATTERNS_FACTORIES_FACTORY_METHOD_PIZZAS_CHICAGO_STYLE_CHEESE_PIZZA_H_

#include "cpp/design-patterns/factories-factory-method/pizzas/pizza.h"

namespace factory_method_pattern {

class ChicagoStyleCheesePizza : public Pizza {
 public:
  ChicagoStyleCheesePizza() {
    name = "Chicago Style Deep Dish Cheese Pizza";
    dough = "Extra Thick Crust Dough";
    sauce = "Plum Tomato Sauce";
  } 

  void Cut() override {
    std::cout << "Cutting the pizza into square slices" << std::endl;
  }
};

}  // namespace factory_method_pattern

#endif // CPP_DESIGN_PATTERNS_FACTORIES_FACTORY_METHOD_PIZZAS_CHICAGO_STYLE_CHEESE_PIZZA_H_