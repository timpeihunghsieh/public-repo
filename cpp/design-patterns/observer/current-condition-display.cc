#include "cpp/design-patterns/observer/current-condition-display.h"

#include<iostream>

namespace observer_pattern {

CurrentConditionDisplay::CurrentConditionDisplay(Subject* subject) {
  subject->RegisterObserver(this);
}

void CurrentConditionDisplay::Update(
    double humidity,
    double temperature,
    double pressure) {
  humidity_ = humidity;
  temperature_ = temperature;
  Display();
}

void CurrentConditionDisplay::Display() {
  std::cout
      << "CurrentConditionDisplay "
      << "Humidity: " << humidity_ << " Temperature: " << temperature_
      << std::endl;
}

}  // namespace observer_pattern