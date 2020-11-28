#ifndef CPP_DESIGN_PATTERNS_FACTORIES_SIMPLE_FACTORY_PIZZA_H_
#define CPP_DESIGN_PATTERNS_FACTORIES_SIMPLE_FACTORY_PIZZA_H_

#include <string>

namespace simple_factory_pattern {

class Pizza {
 public:
  Pizza()
    : boxed(false) {}

  std::string GetDescription() {
    return "This is " + GetName() + ". "
      "It has " + (!boxed ? "not ": "") + "been boxed.";
  }

  void Box() {
    boxed = true;
  }

  virtual std::string GetName() = 0;

 private:
  bool boxed;
};

}  // namespace simple_factory_pattern

#endif // CPP_DESIGN_PATTERNS_FACTORIES_SIMPLE_FACTORY_PIZZA_H_