#include "cpp/design-patterns/command/remote-control/remote-control.h"

#include "gtest/gtest.h"

namespace command_pattern {

class RemoteControlTest : public testing::Test {
};

TEST_F(RemoteControlTest, DefaultControl) {
  RemoteControl control;
  for (int i = 0; i < 7; i++) {
    control.PushOnButton(i);
    control.PushOffButton(i);  
  }
  control.PushUndoButton();
}

}  // namespace command_pattern