#ifndef CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_DEVICE_COMMANDS_GARAGE_DOOR_GARAGE_DOOR_UP_COMMAND_H_
#define CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_DEVICE_COMMANDS_GARAGE_DOOR_GARAGE_DOOR_UP_COMMAND_H_

#include "cpp/design-patterns/command/commands/command.h"
#include "cpp/design-patterns/command/commands/device-commands/garage-door/garage-door.h"

namespace command_pattern {

class GarageDoorUpCommand : public Command {
 public:
  GarageDoorUpCommand(GarageDoor* garage_door) {
    garage_door_ = garage_door;
  }

  void Execute() override {
    garage_door_->Open();
  }

 private:
  GarageDoor* garage_door_;
};

}  // namespace command_pattern

#endif // CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_DEVICE_COMMANDS_GARAGE_DOOR_GARAGE_DOOR_UP_COMMAND_H_