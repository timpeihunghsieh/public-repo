#include <iostream>
#include <string>

#include "cpp/design-patterns/factories-simple-factory/pizza.h"
#include "cpp/design-patterns/factories-simple-factory/pizza-store.h"
#include "cpp/design-patterns/factories-simple-factory/simple-pizza-factory.h"

int main(int argc, char** argv) {
  std::cout << "Tim's Pizza store!" << std::endl;

  simple_factory_pattern::SimplePizzaFactory pizza_factory;
  simple_factory_pattern::PizzaStore pizza_store(&pizza_factory);
  simple_factory_pattern::Pizza* pizza = pizza_store.OrderPizza("cheese");
  std::cout << pizza->GetDescription() << std::endl;
  return 0;
}