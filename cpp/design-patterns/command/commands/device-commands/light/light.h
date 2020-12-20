#ifndef CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_DEVICE_COMMANDS_LIGHT_LIGHT_H_
#define CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_DEVICE_COMMANDS_LIGHT_LIGHT_H_

#include "cpp/design-patterns/command/commands/command.h"

namespace command_pattern {

class Light {
 public:
  Light()
    : is_on_(false) {}

  void On() { is_on_ = true; }
  void Off() { is_on_ = false; }
  bool IsOn() { return is_on_; }

 private:
  bool is_on_;
};

}  // namespace command_pattern

#endif // CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_DEVICE_COMMANDS_LIGHT_LIGHT_H_