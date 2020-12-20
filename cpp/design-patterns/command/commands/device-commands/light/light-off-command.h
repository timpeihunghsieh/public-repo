#ifndef CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_DEVICE_COMMANDS_LIGHT_LIGHT_OFF_COMMAND_H_
#define CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_DEVICE_COMMANDS_LIGHT_LIGHT_OFF_COMMAND_H_

#include "cpp/design-patterns/command/commands/command.h"
#include "cpp/design-patterns/command/commands/device-commands/light/light.h"

namespace command_pattern {

class LightOffCommand : public Command {
 public:
  LightOffCommand(Light* light) {
    light_ = light;
  }

  void Execute() override {
    light_->Off();
  }

 private:
  Light* light_;
};

}  // namespace command_pattern

#endif // CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_DEVICE_COMMANDS_LIGHT_LIGHT_OFF_COMMAND_H_