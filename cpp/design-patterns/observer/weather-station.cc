#include "cpp/design-patterns/observer/weather-station.h"

namespace observer_pattern {

WeatherStation::WeatherStation()
	: current_condition_display_(&weather_data_),
	  statistics_display_(&weather_data_) {
}

void WeatherStation::PollAndPrint(
		double humidity, double temperature, double pressure) {
	weather_data_.SetMeasurement(humidity, temperature, pressure);
}

}  // namespace observer_pattern