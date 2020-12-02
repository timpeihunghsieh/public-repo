#ifndef CPP_DESIGN_PATTERNS_FACTORIES_FACTORY_METHOD_PIZZAS_NY_STYLE_CLAM_PIZZA_H_
#define CPP_DESIGN_PATTERNS_FACTORIES_FACTORY_METHOD_PIZZAS_NY_STYLE_CLAM_PIZZA_H_

#include "cpp/design-patterns/factories-factory-method/pizzas/pizza.h"

namespace factory_method_pattern {

class NyStyleClamPizza : public Pizza {
 public:
  NyStyleClamPizza() {
    name = "NY Style Clam Pizza";
    dough = "Medium Crust";
    sauce = "Blue Sauce";
  } 
};

}  // namespace factory_method_pattern

#endif // CPP_DESIGN_PATTERNS_FACTORIES_FACTORY_METHOD_PIZZAS_NY_STYLE_CLAM_PIZZA_H_