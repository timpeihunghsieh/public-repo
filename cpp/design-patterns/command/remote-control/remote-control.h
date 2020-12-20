#ifndef CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_REMOTE_CONTROL_H_
#define CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_REMOTE_CONTROL_H_

#include <vector>

#include "cpp/design-patterns/command/commands/command.h"
#include "cpp/design-patterns/command/commands/no-command.h"

namespace command_pattern {

class RemoteControl {
 public:
  RemoteControl();

  void SetCommand(int slot, Command* on_command, Command* off_command);
  void PushOnButton(int slot);
  void PushOffButton(int slot);

 private:
  std::vector<Command*> on_commands_;
  std::vector<Command*> off_commands_;
};

}  // namespace command_pattern

#endif // CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_REMOTE_CONTROL_H_