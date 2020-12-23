#ifndef CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_DEVICE_COMMANDS_LIGHT_LIGHT_ON_COMMAND_H_
#define CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_DEVICE_COMMANDS_LIGHT_LIGHT_ON_COMMAND_H_

#include "cpp/design-patterns/command/commands/command.h"
#include "cpp/design-patterns/command/commands/device-commands/light/light.h"

namespace command_pattern {

class LightOnCommand : public Command {
 public:
  LightOnCommand(Light* light) {
    light_ = light;
    is_prev_light_on_ = false;
  }

  void Execute() override {
    is_prev_light_on_ = light_->IsOn();
    light_->On();
  }

  void Undo() override {
    if (is_prev_light_on_) {
      light_->On();
    } else {
      light_->Off();
    }
  }

 private:
  Light* light_;
  bool is_prev_light_on_;
};

}  // namespace command_pattern

#endif // CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_DEVICE_COMMANDS_LIGHT_LIGHT_ON_COMMAND_H_