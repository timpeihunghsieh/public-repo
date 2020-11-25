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
	MeasurementChanged();
}

void WeatherData::MeasurementChanged() {
	NotifyObservers();
}

void WeatherData::RegisterObserver(Observer* observer) {
	observers_.insert(observer);
}

void WeatherData::RemoveObserver(Observer* observer) {
	observers_.erase(observer);
}

void WeatherData::NotifyObservers() {
	for (Observer* observer : observers_) {
		observer->Update(humidity_, temperature_, pressure_);
	}
}
}  // namespace observer_pattern