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

class ThickCrustDough : public Dough {
 public:
  ThickCrustDough() {}

  std::string GetName() override {
    return "ThickCrustDough";
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

class BarbequeSauce : public Sauce {
 public:
  BarbequeSauce() {}

  std::string GetName() override {
    return "BarbequeSauce";
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

class ParmesanCheese : public Cheese {
 public:
  ParmesanCheese() {}

  std::string GetName() override {
    return "ParmesanCheese";
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

class LargeClam : public Clam {
 public:
  LargeClam() {}

  std::string GetName() override {
    return "LargeClam";
  }
};

}  // namespace abstract_factory_pattern

#endif // CPP_DESIGN_PATTERNS_FACTORIES_ABSTRACT_FACTORY_INGREDIENT_FACTORIES_INGREDIENTS_H_