#ifndef CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_DEVICE_COMMANDS_GARAGE_DOOR_GARAGE_DOOR_COMMAND_H_
#define CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_DEVICE_COMMANDS_GARAGE_DOOR_GARAGE_DOOR_COMMAND_H_

#include "cpp/design-patterns/command/commands/command.h"
#include "cpp/design-patterns/command/commands/device-commands/garage-door/garage-door.h"

namespace command_pattern {

class GarageDoorCommand : public Command {
 public:
  GarageDoorCommand(GarageDoor* garage_door) {
    garage_door_ = garage_door;
    is_prev_door_on_ = false;
  }

  void Undo() override {
    if (is_prev_door_on_) {
      garage_door_->Open();
    } else {
      garage_door_->Close();
    }
  }

 protected:
  bool is_prev_door_on_;
  GarageDoor* garage_door_;
};

}  // namespace command_pattern

#endif // CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_DEVICE_COMMANDS_GARAGE_DOOR_GARAGE_DOOR_COMMAND_H_