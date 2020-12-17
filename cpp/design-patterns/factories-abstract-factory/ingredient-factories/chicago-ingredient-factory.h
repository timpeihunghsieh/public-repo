#ifndef CPP_DESIGN_PATTERNS_FACTORIES_ABSTRACT_FACTORY_INGREDIENT_FACTORIES_CHICAGO_INGREDIENT_FACTORY_H_
#define CPP_DESIGN_PATTERNS_FACTORIES_ABSTRACT_FACTORY_INGREDIENT_FACTORIES_CHICAGO_INGREDIENT_FACTORY_H_

#include "cpp/design-patterns/factories-abstract-factory/ingredients/ingredients.h"
#include "cpp/design-patterns/factories-abstract-factory/ingredient-factories/ingredient-factory.h"

namespace abstract_factory_pattern {

class ChicagoIngredientFactory : public IngredientFactory {
 public:
  ChicagoIngredientFactory() {}

  Dough* CreateDough() override {
    return new ThickCrustDough();
  }

  Sauce* CreateSauce() override {
    return new BarbequeSauce();
  }

  Cheese* CreateCheese() override {
    return new ParmesanCheese(); 
  }

  Clam* CreateClam() override {
    return new LargeClam(); 
  }
};

}  // namespace abstract_factory_pattern

#endif // CPP_DESIGN_PATTERNS_FACTORIES_ABSTRACT_FACTORY_INGREDIENT_FACTORIES_CHICAGO_INGREDIENT_FACTORY_H_