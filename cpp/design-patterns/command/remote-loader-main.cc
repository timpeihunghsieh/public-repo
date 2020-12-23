#include <iostream>
#include <vector>
#include <string>

#include "cpp/design-patterns/command/commands/device-commands/light/light.h"
#include "cpp/design-patterns/command/commands/device-commands/light/light-off-command.h"
#include "cpp/design-patterns/command/commands/device-commands/light/light-on-command.h"
#include "cpp/design-patterns/command/commands/macro-command.h"
#include "cpp/design-patterns/command/remote-control/remote-control.h"

int main(int argc, char** argv) {
  std::cout << "Tim's remote control!" << std::endl;

  command_pattern::Light light;
  command_pattern::LightOnCommand light_on_command(&light);  
  command_pattern::LightOffCommand light_off_command(&light);  

  command_pattern::RemoteControl remote_control;
  remote_control.SetCommand(0, &light_on_command, &light_off_command);
  remote_control.PushOnButton(0);
  remote_control.PushOffButton(0);

  command_pattern::MacroCommand party_on_macro({&light_on_command});
  command_pattern::MacroCommand party_off_macro({&light_off_command});
  remote_control.SetCommand(1, &party_on_macro, &light_off_command);
  remote_control.PushOnButton(1);
  remote_control.PushOffButton(1);
  return 0;
}