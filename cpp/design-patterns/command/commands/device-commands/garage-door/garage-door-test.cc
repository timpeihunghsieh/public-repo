#include "cpp/design-patterns/command/commands/device-commands/garage-door/garage-door.h"
#include "cpp/design-patterns/command/commands/device-commands/garage-door/garage-door-down-command.h"
#include "cpp/design-patterns/command/commands/device-commands/garage-door/garage-door-up-command.h"
#include "gtest/gtest.h"

namespace command_pattern {

class GarageDoorTest : public testing::Test {
};

TEST_F(GarageDoorTest, BasicOperations) {
  GarageDoor garage_door;
  EXPECT_FALSE(garage_door.IsOpen());

  garage_door.Open();
  EXPECT_TRUE(garage_door.IsOpen());

  garage_door.Close();
  EXPECT_FALSE(garage_door.IsOpen());
}

TEST_F(GarageDoorTest, GarageDoorUpCommand) {
  GarageDoor garage_door;
  GarageDoorUpCommand command(&garage_door);

  command.Execute();
  EXPECT_TRUE(garage_door.IsOpen());
}

TEST_F(GarageDoorTest, GarageDoorDownCommand) {
  GarageDoor garage_door;
  GarageDoorDownCommand command(&garage_door);

  command.Execute();
  EXPECT_FALSE(garage_door.IsOpen());
}

}  // namespace command_pattern