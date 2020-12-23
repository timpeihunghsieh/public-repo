#ifndef CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_COMMAND_H_
#define CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_COMMAND_H_

namespace command_pattern {

class Command {
 public:
  virtual void Execute() = 0;
  virtual void Undo() = 0;
};

}  // namespace command_pattern

#endif // CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_COMMAND_H_