#ifndef CPP_DESIGN_PATTERNS_FACTORIES_ABSTRACT_FACTORY_INGREDIENT_FACTORIES_NY_INGREDIENT_FACTORY_H_
#define CPP_DESIGN_PATTERNS_FACTORIES_ABSTRACT_FACTORY_INGREDIENT_FACTORIES_NY_INGREDIENT_FACTORY_H_

#include "cpp/design-patterns/factories-abstract-factory/ingredients/ingredients.h"
#include "cpp/design-patterns/factories-abstract-factory/ingredient-factories/ingredient-factory.h"

namespace abstract_factory_pattern {

class NyIngredientFactory : public IngredientFactory {
 public:
  NyIngredientFactory() {}

  Dough* CreateDough() override {
    return new ThinCrustDough();
  }

  Sauce* CreateSauce() override {
    return new MarianaSauce();
  }

  Cheese* CreateCheese() override {
    return new ReggianoCheese(); 
  }

  Clam* CreateClam() override {
    return new FreshClam(); 
  }
};

}  // namespace abstract_factory_pattern

#endif // CPP_DESIGN_PATTERNS_FACTORIES_ABSTRACT_FACTORY_INGREDIENT_FACTORIES_NY_INGREDIENT_FACTORY_H_