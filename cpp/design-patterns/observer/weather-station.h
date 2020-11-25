#ifndef CPP_DESIGN_PATTERNS_OBSERVER_WEATHER_STATION_H_
#define CPP_DESIGN_PATTERNS_OBSERVER_WEATHER_STATION_H_

#include "cpp/design-patterns/observer/current-condition-display.h"
#include "cpp/design-patterns/observer/statistics-display.h"
#include "cpp/design-patterns/observer/weather-data.h"

namespace observer_pattern {

class WeatherStation {
 public:
 	WeatherStation();

 	// TODO(timhsieh): comment
 	void PollAndPrint(double humidity, double temperature, double pressure);

 private:
 	WeatherData weather_data_;
 	CurrentConditionDisplay current_condition_display_;
 	StatisticsDisplay statistics_display_;
};

}  // namespace observer_pattern

#endif // CPP_DESIGN_PATTERNS_OBSERVER_WEATHER_STATION_H_