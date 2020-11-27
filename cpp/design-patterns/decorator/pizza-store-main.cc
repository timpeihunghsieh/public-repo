#include <iostream>
#include <string>

#include "cpp/design-patterns/decorator/pizzas/farmhouse-pizza.h"
#include "cpp/design-patterns/decorator/toppings/barbeque.h"
#include "cpp/design-patterns/decorator/toppings/fresh-tomatoes.h"

int main(int argc, char** argv) {
  std::cout << "Tim's Pizza Store!" << std::endl;

  decorator_pattern::Pizza* pizza = new decorator_pattern::FarmHousePizza();
  pizza = new decorator_pattern::Barbeque(pizza);
  pizza = new decorator_pattern::FreshTomatoes(pizza);

  std::cout << "Barbeque FarmHouse Pizza with tomatoes: "
      << pizza->GetCost() << std::endl;
  return 0;
}