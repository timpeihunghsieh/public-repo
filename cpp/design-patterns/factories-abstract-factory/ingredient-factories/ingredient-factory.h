#ifndef CPP_DESIGN_PATTERNS_FACTORIES_ABSTRACT_FACTORY_INGREDIENT_FACTORIES_INGREDIENT_FACTORY_H_
#define CPP_DESIGN_PATTERNS_FACTORIES_ABSTRACT_FACTORY_INGREDIENT_FACTORIES_INGREDIENT_FACTORY_H_

#include "cpp/design-patterns/factories-abstract-factory/ingredients/ingredients.h"

namespace abstract_factory_pattern {

class IngredientFactory {
 public:
  IngredientFactory() {}

  virtual Dough* CreateDough() = 0;
  virtual Sauce* CreateSauce() = 0;
  virtual Cheese* CreateCheese() = 0;
  virtual Clam* CreateClam() = 0;
};

}  // namespace abstract_factory_pattern

#endif // CPP_DESIGN_PATTERNS_FACTORIES_ABSTRACT_FACTORY_INGREDIENT_FACTORIES_INGREDIENT_FACTORY_H_