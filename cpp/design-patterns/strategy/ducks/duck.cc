#include "cpp/design-patterns/strategy/ducks/duck.h"

namespace strategy_pattern {

Duck::Duck() {}

void Duck::PerformQuack() {
  quack_behavior_->Quack();
}

void Duck::PerformFly() {
  fly_behavior_->Fly();
}
}  // namespace strategy_pattern