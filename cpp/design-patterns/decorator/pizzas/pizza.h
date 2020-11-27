#ifndef CPP_DESIGN_PATTERNS_DECORATOR_PIZZAS_PIZZA_H_
#define CPP_DESIGN_PATTERNS_DECORATOR_PIZZAS_PIZZA_H_

namespace decorator_pattern {

class Pizza {
 public:
  Pizza() {}
  virtual int GetCost() = 0;
};

}  // namespace decorator_pattern

#endif // CPP_DESIGN_PATTERNS_DECORATOR_PIZZAS_PIZZA_H_