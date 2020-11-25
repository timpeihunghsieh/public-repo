#include "cpp/design-patterns/observer/weather-data.h"

namespace observer_pattern {

WeatherData::WeatherData() {}

void WeatherData::SetMeasurement(
    double humidity,
    double temperature,
    double pressure) {
  humidity_ = humidity;
  temperature_ = temperature;
  pressure_ = pressure;
  NotifyObservers(humidity_, temperature_, pressure_);
}
}  // namespace observer_pattern