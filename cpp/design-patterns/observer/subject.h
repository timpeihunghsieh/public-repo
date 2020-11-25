#ifndef CPP_DESIGN_PATTERNS_OBSERVER_SUBJECT_H_
#define CPP_DESIGN_PATTERNS_OBSERVER_SUBJECT_H_

namespace observer_pattern {

class Subject {
 public:
   virtual void RegisterObserver(Observer* observer) = 0;
   virtual void RemoveObserver(Observer* observer) = 0;
   virtual void NotifyObservers() = 0;
};

}  // namespace observer_pattern

#endif // CPP_DESIGN_PATTERNS_OBSERVER_SUBJECT_H_