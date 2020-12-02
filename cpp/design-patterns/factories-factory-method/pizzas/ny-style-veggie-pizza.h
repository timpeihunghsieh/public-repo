#ifndef CPP_DESIGN_PATTERNS_FACTORIES_FACTORY_METHOD_PIZZAS_NY_STYLE_VEGGIE_PIZZA_H_
#define CPP_DESIGN_PATTERNS_FACTORIES_FACTORY_METHOD_PIZZAS_NY_STYLE_VEGGIE_PIZZA_H_

#include "cpp/design-patterns/factories-factory-method/pizzas/pizza.h"

namespace factory_method_pattern {

class NyStyleVeggiePizza : public Pizza {
 public:
  NyStyleVeggiePizza() {
    name = "NY Style Veggie Pizza";
    dough = "Super Thin Crust";
    sauce = "Green Sauce";
  } 
};

}  // namespace factory_method_pattern

#endif // CPP_DESIGN_PATTERNS_FACTORIES_FACTORY_METHOD_PIZZAS_NY_STYLE_VEGGIE_PIZZA_H_