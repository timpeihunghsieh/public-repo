#include <iostream>
#include <string>

#include "cpp/design-patterns/factories-abstract-factory/pizzas/pizza.h"
#include "cpp/design-patterns/factories-abstract-factory/stores/pizza-store.h"
#include "cpp/design-patterns/factories-abstract-factory/stores/ny-style-pizza-store.h"


using abstract_factory_pattern::NyStylePizzaStore;
using abstract_factory_pattern::Pizza;
using abstract_factory_pattern::PizzaStore;

int main(int argc, char** argv) {
  std::cout << "Tim's Pizza Empire!" << std::endl << std::endl;

  // NY cheese pizza
  PizzaStore* ny_pizza_store = new NyStylePizzaStore();
  Pizza* ny_cheese_pizza = ny_pizza_store->OrderPizza("cheese");
  std::cout << std::endl;
  std::cout << "Pizza is: " << ny_cheese_pizza->GetName() << std::endl;
  std::cout << ny_cheese_pizza->GetDescription() << std::endl;
  return 0;
}