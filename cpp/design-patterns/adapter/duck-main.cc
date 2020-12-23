#include <iostream>
#include <string>

#include "cpp/design-patterns/adapter/duck.h"
#include "cpp/design-patterns/adapter/mallard-duck.h"
#include "cpp/design-patterns/adapter/turkey-adapter.h"
#include "cpp/design-patterns/adapter/wild-turkey.h"

using namespace adapter_pattern;

int main(int argc, char** argv) {
  std::cout << "Tim's Zoo!" << std::endl << std::endl;

  MallardDuck mallard_duck;
  WildTurkey wild_turkey;

  Duck* turkey_adapter = new TurkeyAdapter(&wild_turkey);

  std::cout << "Turkey says..." << std::endl;
  wild_turkey.Gobble();
  wild_turkey.Fly();
  std::cout << std::endl;

  std::cout << "Duck says..." << std::endl;
  mallard_duck.Quack();
  mallard_duck.Fly();
  std::cout << std::endl;

  std::cout << "TurkeyAdapter says..." << std::endl;
  turkey_adapter->Quack();
  turkey_adapter->Fly();
  std::cout << std::endl;
  return 0;
}