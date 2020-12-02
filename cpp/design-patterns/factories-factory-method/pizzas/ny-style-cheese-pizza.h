#ifndef CPP_DESIGN_PATTERNS_FACTORIES_FACTORY_METHOD_PIZZAS_NY_STYLE_CHEESE_PIZZA_H_
#define CPP_DESIGN_PATTERNS_FACTORIES_FACTORY_METHOD_PIZZAS_NY_STYLE_CHEESE_PIZZA_H_

#include "cpp/design-patterns/factories-factory-method/pizzas/pizza.h"

namespace factory_method_pattern {

class NyStyleCheesePizza : public Pizza {
 public:
  NyStyleCheesePizza() {
    name = "NY Style Sauce and Cheese Pizza";
    dough = "Thin Crust";
    sauce = "Mariana Sauce";
  } 
};

}  // namespace factory_method_pattern

#endif // CPP_DESIGN_PATTERNS_FACTORIES_FACTORY_METHOD_PIZZAS_NY_STYLE_CHEESE_PIZZA_H_