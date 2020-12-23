#ifndef CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_MACRO_COMMAND_H_
#define CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_MACRO_COMMAND_H_

#include <vector>

namespace command_pattern {

class MacroCommand : public Command {
 public:
  MacroCommand(const std::vector<Command*> commands) {
    for (auto command : commands) {
      commands_.push_back(command);
    }
  }

  void Execute() override {
    for (auto command : commands_) {
      command->Execute();
    } 
  }

  void Undo() override {
    for (int i = commands_.size() - 1; i >= 0; i--) {
      commands_[i]->Undo();
    }
  }

 private:
  std::vector<Command*> commands_;
};

}  // namespace command_pattern

#endif // CPP_DESIGN_PATTERNS_COMMAND_COMMANDS_MACRO_COMMAND_H_