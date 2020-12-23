#include "cpp/design-patterns/command/commands/device-commands/light/light.h"
#include "cpp/design-patterns/command/commands/device-commands/light/light-off-command.h"
#include "cpp/design-patterns/command/commands/device-commands/light/light-on-command.h"
#include "gtest/gtest.h"

namespace command_pattern {

class LightTest : public testing::Test {
};

TEST_F(LightTest, BasicOperations) {
  Light light;
  EXPECT_FALSE(light.IsOn());

  light.On();
  EXPECT_TRUE(light.IsOn());

  light.Off();
  EXPECT_FALSE(light.IsOn());
}

TEST_F(LightTest, LightOnCommand) {
  Light light;
  LightOnCommand command(&light);

  command.Execute();
  EXPECT_TRUE(light.IsOn());

  command.Undo();
  EXPECT_FALSE(light.IsOn());
}

TEST_F(LightTest, LightOffCommand) {
  Light light;
  LightOffCommand command(&light);

  command.Execute();
  EXPECT_FALSE(light.IsOn());

  command.Undo();
  EXPECT_FALSE(light.IsOn());
}

}  // namespace command_pattern