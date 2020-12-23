#ifndef CPP_DESIGN_PATTERNS_ADAPTER_TURKEY_H
#define CPP_DESIGN_PATTERNS_ADAPTER_TURKEY_H

namespace adapter_pattern {

class Turkey {
 public:
  Turkey() {}

  virtual void Gobble() = 0;
  virtual void Fly() = 0;
};

}  // namespace adapter_pattern

#endif // CPP_DESIGN_PATTERNS_ADAPTER_TURKEY_H