#ifndef CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_DEVICE_COMMANDS_GARAGE_DOOR_GARAGE_DOOR_UP_COMMAND_H_
#define CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_DEVICE_COMMANDS_GARAGE_DOOR_GARAGE_DOOR_UP_COMMAND_H_

#include "cpp/design-patterns/command/commands/command.h"
#include "cpp/design-patterns/command/commands/device-commands/garage-door/garage-door.h"
#include "cpp/design-patterns/command/commands/device-commands/garage-door/garage-door-command.h"

namespace command_pattern {

class GarageDoorUpCommand : public GarageDoorCommand {
 public:
  GarageDoorUpCommand(GarageDoor* garage_door)
      : GarageDoorCommand(garage_door) {}

  void Execute() override {
    is_prev_door_on_ = garage_door_->IsOpen();
    garage_door_->Open();
  }
};

}  // namespace command_pattern

#endif // CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_DEVICE_COMMANDS_GARAGE_DOOR_GARAGE_DOOR_UP_COMMAND_H_