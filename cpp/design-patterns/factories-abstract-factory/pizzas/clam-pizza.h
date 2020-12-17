#ifndef CPP_DESIGN_PATTERNS_FACTORIES_ABSTRACT_FACTORY_PIZZAS_CLAM_PIZZA_H_
#define CPP_DESIGN_PATTERNS_FACTORIES_ABSTRACT_FACTORY_PIZZAS_CLAM_PIZZA_H_

#include <iostream>
#include <string>

#include "cpp/design-patterns/factories-abstract-factory/ingredient-factories/ingredient-factory.h"
#include "cpp/design-patterns/factories-abstract-factory/pizzas/pizza.h"

namespace abstract_factory_pattern {

class ClamPizza : public Pizza {
 public:
  ClamPizza(IngredientFactory* ingredient_factory)
    : ingredient_factory_(ingredient_factory) {}

  void Prepare() override {
    dough_ = ingredient_factory_->CreateDough();
    sauce_ = ingredient_factory_->CreateSauce();
    clam_ = ingredient_factory_->CreateClam();
  }

  std::string GetName() override {
    return "ClamPizza";
  }

 private:
  IngredientFactory* ingredient_factory_;
};

}  // namespace abstract_factory_pattern

#endif // CPP_DESIGN_PATTERNS_FACTORIES_ABSTRACT_FACTORY_PIZZAS_CLAM_PIZZA_H_