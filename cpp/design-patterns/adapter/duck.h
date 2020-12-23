#ifndef CPP_DESIGN_PATTERNS_ADAPTER_DUCK_H
#define CPP_DESIGN_PATTERNS_ADAPTER_DUCK_H

namespace adapter_pattern {

class Duck {
 public:
  Duck() {}

  virtual void Quack() = 0;
  virtual void Fly() = 0;
};

}  // namespace adapter_pattern

#endif // CPP_DESIGN_PATTERNS_ADAPTER_DUCK_H