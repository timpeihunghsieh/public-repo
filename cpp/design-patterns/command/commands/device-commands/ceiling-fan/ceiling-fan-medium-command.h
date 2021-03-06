#ifndef CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_DEVICE_COMMANDS_CEILING_FAN_CEILING_FAN_MIDIUM_COMMAND_H_
#define CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_DEVICE_COMMANDS_CEILING_FAN_CEILING_FAN_MIDIUM_COMMAND_H_

#include "cpp/design-patterns/command/commands/command.h"
#include "cpp/design-patterns/command/commands/device-commands/ceiling-fan/ceiling-fan.h"
#include "cpp/design-patterns/command/commands/device-commands/ceiling-fan/ceiling-fan-command.h"

namespace command_pattern {

class CeilingFanMediumCommand : public CeilingFanCommand {
 public:
  CeilingFanMediumCommand(CeilingFan* ceiling_fan)
    : CeilingFanCommand(ceiling_fan) {}

  void Execute() override {
    prev_speed_ = ceiling_fan_->GetSpeed();
    ceiling_fan_->Medium();
  }
};

}  // namespace command_pattern

#endif // CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_DEVICE_COMMANDS_CEILING_FAN_CEILING_FAN_MIDIUM_COMMAND_H_