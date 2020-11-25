#include "cpp/design-patterns/observer/subject.h"

namespace observer_pattern {

Subject::Subject() {}

void Subject::RegisterObserver(Observer* observer) {
  observers_.insert(observer);
}

void Subject::RemoveObserver(Observer* observer) {
  observers_.erase(observer);
}

void Subject::NotifyObservers(
    double humidity,
    double temperature,
    double pressure) {
  for (Observer* observer : observers_) {
    observer->Update(humidity, temperature, pressure);
  }
}
}  // namespace observer_pattern