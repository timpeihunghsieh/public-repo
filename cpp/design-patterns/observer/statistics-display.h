#ifndef CPP_DESIGN_PATTERNS_OBSERVER_STATISTICS_DISPLAY_H_
#define CPP_DESIGN_PATTERNS_OBSERVER_STATISTICS_DISPLAY_H_

#include "cpp/design-patterns/observer/observer.h"
#include "cpp/design-patterns/observer/subject.h"

namespace observer_pattern {

class StatisticsDisplay : public Observer {
 public:
   StatisticsDisplay(Subject* subject);
   void Update(double humidity, double temperature, double pressure) override;

 private:
   void Display();

   double max_humidity_;
   double max_temperature_;
};

}  // namespace observer_pattern

#endif // CPP_DESIGN_PATTERNS_OBSERVER_STATISTICS_DISPLAY_H_