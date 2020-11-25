#ifndef CPP_DESIGN_PATTERNS_OBSERVER_CURRENT_CONDITION_DISPLAY_H_
#define CPP_DESIGN_PATTERNS_OBSERVER_CURRENT_CONDITION_DISPLAY_H_

#include "cpp/design-patterns/observer/observer.h"
#include "cpp/design-patterns/observer/subject.h"

namespace observer_pattern {

class CurrentConditionDisplay : public Observer {
 public:
 	CurrentConditionDisplay(Subject* subject);
 	void Update(double humidity, double temperature, double pressure) override;

 private:
 	void Display();

 	double humidity_;
 	double temperature_;
};

}  // namespace observer_pattern

#endif // CPP_DESIGN_PATTERNS_OBSERVER_CURRENT_CONDITION_DISPLAY_H_