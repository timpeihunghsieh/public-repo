#ifndef CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_DEVICE_COMMANDS_CEILING_FAN_CEILING_FAN_COMMAND_H_
#define CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_DEVICE_COMMANDS_CEILING_FAN_CEILING_FAN_COMMAND_H_

#include "cpp/design-patterns/command/commands/command.h"
#include "cpp/design-patterns/command/commands/device-commands/ceiling-fan/ceiling-fan.h"

namespace command_pattern {

class CeilingFanCommand : public Command {
 public:
  CeilingFanCommand(CeilingFan* ceiling_fan) {
    ceiling_fan_ = ceiling_fan;
    prev_speed_ = CeilingFan::FanSpeed::OFF;
  }

  void Undo() override {
    if (prev_speed_ == CeilingFan::FanSpeed::HIGH) {
      ceiling_fan_->High();
    } else if (prev_speed_ == CeilingFan::FanSpeed::MEDIUM) {
      ceiling_fan_->Medium();
    } else if (prev_speed_ == CeilingFan::FanSpeed::LOW) {
      ceiling_fan_->Low();
    } else {
      ceiling_fan_->Off();
    }
  }

 protected:
  CeilingFan* ceiling_fan_;
  CeilingFan::FanSpeed prev_speed_;
};

}  // namespace command_pattern

#endif // CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_DEVICE_COMMANDS_CEILING_FAN_CEILING_FAN_COMMAND_H_