#ifndef CPP_DESIGN_PATTERNS_FACTORIES_ABSTRACT_FACTORY_INGREDIENT_FACTORIES_INGREDIENTS_H_
#define CPP_DESIGN_PATTERNS_FACTORIES_ABSTRACT_FACTORY_INGREDIENT_FACTORIES_INGREDIENTS_H_

#include<string>

namespace abstract_factory_pattern {

class Dough {
 public:
  Dough() {}
  virtual std::string GetName() = 0;
};

class ThinCrustDough : public Dough {
 public:
  ThinCrustDough() {}

  std::string GetName() override {
    return "ThinCrustDough";
  }
};

class Sauce {
 public:
  Sauce() {}
  virtual std::string GetName() = 0;
};

class MarianaSauce : public Sauce {
 public:
  MarianaSauce() {}

  std::string GetName() override {
    return "MarianaSauce";
  }
};

class Cheese {
 public:
  Cheese() {}
  virtual std::string GetName() = 0;
};

class ReggianoCheese : public Cheese {
 public:
  ReggianoCheese() {}

  std::string GetName() override {
    return "ReggianoCheese";
  }
};

class Clam {
 public:
  Clam() {}
  virtual std::string GetName() = 0;
};

class FreshClam : public Clam {
 public:
  FreshClam() {}

  std::string GetName() override {
    return "FreshClam";
  }
};

}  // namespace abstract_factory_pattern

#endif // CPP_DESIGN_PATTERNS_FACTORIES_ABSTRACT_FACTORY_INGREDIENT_FACTORIES_INGREDIENTS_H_