#ifndef CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_NO_COMMAND_H_
#define CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_NO_COMMAND_H_

namespace command_pattern {

class NoCommand : public Command {
 public:
  NoCommand() {}

  void Execute() override {}
};

}  // namespace command_pattern

#endif // CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_NO_COMMAND_H_