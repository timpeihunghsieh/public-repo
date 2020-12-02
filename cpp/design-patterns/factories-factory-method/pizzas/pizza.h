#ifndef CPP_DESIGN_PATTERNS_FACTORIES_FACTORY_METHOD_PIZZAS_PIZZA_H_
#define CPP_DESIGN_PATTERNS_FACTORIES_FACTORY_METHOD_PIZZAS_PIZZA_H_

#include <iostream>
#include <string>

namespace factory_method_pattern {

class Pizza {
 public:
  Pizza() {}

  void Prepare() {
    std::cout << "Preparing " << name << std::endl;
    std::cout << "Tossing dough..." << dough << std::endl;
    std::cout << "Adding sauce..." << sauce << std::endl;
  }

  virtual void Bake() {
    std::cout << "Bake for 25 at 330." << std::endl;
  }

  virtual void Cut() {
    std::cout << "Cutting pizza into diagnoal slices." << std::endl;
  }

  virtual void Box() {
    std::cout << "Place Pizza in official pizza box." << std::endl;
  }

  std::string GetName() {
    return name;
  }

 protected:
  std::string name;
  std::string dough;
  std::string sauce;
};

}  // namespace factory_method_pattern

#endif // CPP_DESIGN_PATTERNS_FACTORIES_FACTORY_METHOD_PIZZAS_PIZZA_H_