#ifndef CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_DEVICE_COMMANDS_CEILING_FAN_CEILING_FAN_H_
#define CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_DEVICE_COMMANDS_CEILING_FAN_CEILING_FAN_H_

#include "cpp/design-patterns/command/commands/command.h"

namespace command_pattern {

class CeilingFan {
 public:
  CeilingFan() : speed_(FanSpeed::OFF) {}

  enum class FanSpeed {
    OFF,
    LOW,
    MEDIUM,
    HIGH
  };

  void Low() { speed_ = FanSpeed::LOW; }
  void Medium() { speed_ = FanSpeed::MEDIUM; }
  void High() { speed_ = FanSpeed::HIGH; }
  void Off() { speed_ = FanSpeed::OFF; }
  FanSpeed GetSpeed() {
    return speed_;
  }

 private:
  FanSpeed speed_;
};

}  // namespace command_pattern

#endif // CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_DEVICE_COMMANDS_CEILING_FAN_CEILING_FAN_H_