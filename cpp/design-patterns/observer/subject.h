#ifndef CPP_DESIGN_PATTERNS_OBSERVER_SUBJECT_H_
#define CPP_DESIGN_PATTERNS_OBSERVER_SUBJECT_H_

#include <set>

#include "cpp/design-patterns/observer/observer.h"

namespace observer_pattern {

class Subject {
 public:
   Subject();
   void RegisterObserver(Observer* observer);
   void RemoveObserver(Observer* observer);

   // NOTE: Ideally, a common Subject class would not have application level
   // data here. This can be refactor out by using a generic data container.
   void NotifyObservers(double humidity,
                        double temperature,
                        double pressure);

 private:
  // Not owned
  std::set<Observer*> observers_;
};

}  // namespace observer_pattern

#endif // CPP_DESIGN_PATTERNS_OBSERVER_SUBJECT_H_