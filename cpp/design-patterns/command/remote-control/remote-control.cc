#include "cpp/design-patterns/command/remote-control/remote-control.h"

namespace command_pattern {

RemoteControl::RemoteControl() {
  Command* no_command = new NoCommand();
  for (int i = 0; i < 7; i++) {
    on_commands_.push_back(no_command);
    off_commands_.push_back(no_command);
  }
}

void RemoteControl::SetCommand(
    int slot, Command* on_command, Command* off_command) {
  on_commands_[slot] = on_command;
  off_commands_[slot] = off_command;
}

void RemoteControl::PushOnButton(int slot) {
  on_commands_[slot]->Execute();
}

void RemoteControl::PushOffButton(int slot) {
  off_commands_[slot]->Execute();
}

}  // namespace command_pattern