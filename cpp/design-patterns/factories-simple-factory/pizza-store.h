#ifndef CPP_DESIGN_PATTERNS_FACTORIES_SIMPLE_FACTORY_PIZZA_STORE_H_
#define CPP_DESIGN_PATTERNS_FACTORIES_SIMPLE_FACTORY_PIZZA_STORE_H_

#include "cpp/design-patterns/factories-simple-factory/pizza.h"
#include "cpp/design-patterns/factories-simple-factory/simple-pizza-factory.h"

namespace simple_factory_pattern {

class PizzaStore {
 public:
  PizzaStore(SimplePizzaFactory* pizza_factory)
    : pizza_factory_(pizza_factory) {
  }

  Pizza* OrderPizza(std::string type) {
    Pizza* pizza = pizza_factory_->CreatePizza(type);
    pizza->Box();
    return pizza;
  }

 private:
  // Does not own.
  SimplePizzaFactory* pizza_factory_;
};

}  // namespace simple_factory_pattern

#endif // CPP_DESIGN_PATTERNS_FACTORIES_SIMPLE_FACTORY_PIZZA_STORE_H_