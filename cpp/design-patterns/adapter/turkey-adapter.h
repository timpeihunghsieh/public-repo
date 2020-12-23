#ifndef CPP_DESIGN_PATTERNS_ADAPTER_TURKEY_ADAPTER_H
#define CPP_DESIGN_PATTERNS_ADAPTER_TURKEY_ADAPTER_H

#include <iostream>

#include "cpp/design-patterns/adapter/duck.h"
#include "cpp/design-patterns/adapter/turkey.h"

namespace adapter_pattern {

class TurkeyAdapter : public Duck {
 public:
  TurkeyAdapter(Turkey* turkey)
    : turkey_(turkey) {}

  void Quack() override {
    turkey_->Gobble();
  }

  void Fly() override {
    // Turkey can't fly far. They need to fly 5 times to make up for the
    // distance.
    for (int i = 0; i < 5; i++) {
      turkey_->Fly();
    }
  }

 private:
  Turkey* turkey_;
};

}  // namespace adapter_pattern

#endif // CPP_DESIGN_PATTERNS_ADAPTER_TURKEY_ADAPTER_H