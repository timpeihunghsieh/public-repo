#ifndef CPP_DESIGN_PATTERNS_OBSERVER_OBSERVER_H_
#define CPP_DESIGN_PATTERNS_OBSERVER_OBSERVER_H_

namespace observer_pattern {

class Observer {
 public:
 	virtual void Update(double humidity, double temperature, double pressure) = 0;
};

}  // namespace observer_pattern

#endif // CPP_DESIGN_PATTERNS_OBSERVER_OBSERVER_H_