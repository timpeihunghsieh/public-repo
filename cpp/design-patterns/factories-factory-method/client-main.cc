#include <iostream>
#include <string>

#include "cpp/design-patterns/factories-factory-method/pizzas/pizza.h"
#include "cpp/design-patterns/factories-factory-method/stores/chicago-style-pizza-store.h"
#include "cpp/design-patterns/factories-factory-method/stores/ny-style-pizza-store.h"

using factory_method_pattern::ChicagoStylePizzaStore;
using factory_method_pattern::NyStylePizzaStore;
using factory_method_pattern::PizzaStore;
using factory_method_pattern::Pizza;

int main(int argc, char** argv) {
  std::cout << "Tim's Pizza Empire!" << std::endl;

  // NY cheese pizza
  PizzaStore* ny_pizza_store = new NyStylePizzaStore();
  Pizza* ny_cheese_pizza = ny_pizza_store->OrderPizza("cheese");
  std::cout
      << "Pizza is: " << ny_cheese_pizza->GetName()
      << std::endl << std::endl;

  // NY veggie pizza
  Pizza* ny_veggie_pizza = ny_pizza_store->OrderPizza("veggie");
  std::cout
      << "Pizza is: " << ny_veggie_pizza->GetName()
      << std::endl << std::endl;

  // NY clam pizza
  Pizza* ny_clam_pizza = ny_pizza_store->OrderPizza("clam");
  std::cout
      << "Pizza is: " << ny_clam_pizza->GetName()
      << std::endl << std::endl;

  // Chicago cheese pizza
  PizzaStore* chicago_pizza_store = new ChicagoStylePizzaStore();
  Pizza* chicago_cheese_pizza = chicago_pizza_store->OrderPizza("cheese");
  std::cout
      << "Pizza is: " << chicago_cheese_pizza->GetName()
      << std::endl << std::endl;
  
  return 0;
}