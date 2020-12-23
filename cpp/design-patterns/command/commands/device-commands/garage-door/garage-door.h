#ifndef CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_DEVICE_COMMANDS_GARAGE_DOOR_GARAGE_DOOR_H_
#define CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_DEVICE_COMMANDS_GARAGE_DOOR_GARAGE_DOOR_H_

#include "cpp/design-patterns/command/commands/command.h"

namespace command_pattern {

class GarageDoor {
 public:
  GarageDoor()
    : is_up_(false) {}

  void Open() { is_up_ = true; }
  void Close() { is_up_ = false; }
  bool IsOpen() { return is_up_; }

 private:
  bool is_up_;
};

}  // namespace command_pattern

#endif // CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_DEVICE_COMMANDS_GARAGE_DOOR_GARAGE_DOOR_H_