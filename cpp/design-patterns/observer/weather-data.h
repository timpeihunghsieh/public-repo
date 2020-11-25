#ifndef CPP_DESIGN_PATTERNS_OBSERVER_WEATHER_DATA_H_
#define CPP_DESIGN_PATTERNS_OBSERVER_WEATHER_DATA_H_

#include <set>

#include "cpp/design-patterns/observer/observer.h"
#include "cpp/design-patterns/observer/subject.h"

namespace observer_pattern {

class WeatherData : public Subject {
 public:
 	WeatherData();

 	void SetMeasurement(double humidity, double temperature, double pressure);

 	void RegisterObserver(Observer* observer) override;
 	void RemoveObserver(Observer* observer) override;
 	void NotifyObservers() override;

 private:
 	void MeasurementChanged();

 	// Not owned
 	std::set<Observer*> observers_;

 	double humidity_;
 	double temperature_;
 	double pressure_;
};

}  // namespace observer_pattern

#endif // CPP_DESIGN_PATTERNS_OBSERVER_WEATHER_DATA_H_