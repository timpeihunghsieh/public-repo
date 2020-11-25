#include "cpp/design-patterns/observer/statistics-display.h"

#include<iostream>

namespace observer_pattern {

StatisticsDisplay::StatisticsDisplay(Subject* subject) {
  subject->RegisterObserver(this);
}

void StatisticsDisplay::Update(
    double humidity,
    double temperature,
    double pressure) {
  max_humidity_ = std::max(max_humidity_, humidity);
  max_temperature_ = std::max(max_humidity_, temperature);
  Display();
}

void StatisticsDisplay::Display() {
  std::cout
      << "StatisticsDisplay"
      << " Max humidity: " << max_humidity_
      << " Max Temperature: " << max_temperature_
      << std::endl;
}

}  // namespace observer_pattern