#ifndef CPP_DESIGN_PATTERNS_FACTORIES_ABSTRACT_FACTORY_PIZZAS_PIZZA_H_
#define CPP_DESIGN_PATTERNS_FACTORIES_ABSTRACT_FACTORY_PIZZAS_PIZZA_H_

#include <iostream>

#include "cpp/design-patterns/factories-abstract-factory/ingredients/ingredients.h"

namespace abstract_factory_pattern {

class Pizza {
 public:
  Pizza() {}

  virtual void Prepare() = 0;

  virtual void Bake() {
    std::cout << "Bake for 25 at 330." << std::endl;
  }

  virtual void Cut() {
    std::cout << "Cutting pizza into diagnoal slices." << std::endl;
  }

  virtual void Box() {
    std::cout << "Place Pizza in official pizza box." << std::endl;
  }

  virtual std::string GetName() = 0;
  std::string GetDescription() {
    return "Made with: \n"
      + (dough_ != nullptr ? dough_->GetName() + "\n" : "")
      + (sauce_ != nullptr ? sauce_->GetName() + "\n" : "")
      + (cheese_ != nullptr ? cheese_->GetName() + "\n" : "")
      + (clam_ != nullptr ? clam_->GetName() : "");
  }

 protected:
  Dough* dough_;
  Sauce* sauce_;
  Cheese* cheese_;
  Clam* clam_;
};

}  // namespace abstract_factory_pattern

#endif // CPP_DESIGN_PATTERNS_FACTORIES_ABSTRACT_FACTORY_PIZZAS_PIZZA_H_