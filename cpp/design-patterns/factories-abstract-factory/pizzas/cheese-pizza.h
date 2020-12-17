#ifndef CPP_DESIGN_PATTERNS_FACTORIES_ABSTRACT_FACTORY_PIZZAS_CHEESE_PIZZA_H_
#define CPP_DESIGN_PATTERNS_FACTORIES_ABSTRACT_FACTORY_PIZZAS_CHEESE_PIZZA_H_

#include "cpp/design-patterns/factories-abstract-factory/ingredient-factories/ingredient-factory.h"
#include "cpp/design-patterns/factories-abstract-factory/pizzas/pizza.h"

namespace abstract_factory_pattern {

class CheesePizza : public Pizza {
 public:
  CheesePizza(IngredientFactory* ingredient_factory)
    : ingredient_factory_(ingredient_factory) {}

  void Prepare() override {
    dough_ = ingredient_factory_->CreateDough();
    sauce_ = ingredient_factory_->CreateSauce();
    cheese_ = ingredient_factory_->CreateCheese();
  }

  std::string GetName() override {
    return "CheesePizza";
  }

 private:
  IngredientFactory* ingredient_factory_;
};

}  // namespace abstract_factory_pattern

#endif // CPP_DESIGN_PATTERNS_FACTORIES_ABSTRACT_FACTORY_PIZZAS_CHEESE_PIZZA_H_