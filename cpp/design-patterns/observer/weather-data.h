#ifndef CPP_DESIGN_PATTERNS_OBSERVER_WEATHER_DATA_H_
#define CPP_DESIGN_PATTERNS_OBSERVER_WEATHER_DATA_H_

#include "cpp/design-patterns/observer/subject.h"

namespace observer_pattern {

class WeatherData : public Subject {
 public:
   WeatherData();

   void SetMeasurement(double humidity, double temperature, double pressure);

 private:
   double humidity_;
   double temperature_;
   double pressure_;
};

}  // namespace observer_pattern

#endif // CPP_DESIGN_PATTERNS_OBSERVER_WEATHER_DATA_H_