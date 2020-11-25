#include <iostream>
#include <string>

#include "cpp/design-patterns/strategy/ducks/mallard-duck.h"
#include "cpp/design-patterns/strategy/ducks/model-duck.h"

int main(int argc, char** argv) {
  std::cout << "Tim's Zoo!" << std::endl << std::endl;

  std::cout << "Mallard Duck" << std::endl;
  strategy_pattern::MallardDuck mallard_duck;
  mallard_duck.PerformQuack();
  mallard_duck.PerformFly();
  std::cout << std::endl;

  std::cout << "Model Duck" << std::endl;
  strategy_pattern::ModelDuck model_duck;
  model_duck.PerformQuack();
  model_duck.PerformFly();
  std::cout << std::endl;
  return 0;
}