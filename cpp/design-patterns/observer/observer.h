#ifndef CPP_DESIGN_PATTERNS_OBSERVER_OBSERVER_H_
#define CPP_DESIGN_PATTERNS_OBSERVER_OBSERVER_H_

namespace observer_pattern {

class Observer {
 public:
  // NOTE: Ideally, a common Object class would not have application level
  // data here. This can be refactor out by using a generic data container.
  virtual void Update(double humidity, double temperature, double pressure) = 0;
};

}  // namespace observer_pattern

#endif // CPP_DESIGN_PATTERNS_OBSERVER_OBSERVER_H_