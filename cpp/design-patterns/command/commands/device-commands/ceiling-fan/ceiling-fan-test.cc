#include "cpp/design-patterns/command/commands/device-commands/ceiling-fan/ceiling-fan.h"
#include "cpp/design-patterns/command/commands/device-commands/ceiling-fan/ceiling-fan-high-command.h"
#include "cpp/design-patterns/command/commands/device-commands/ceiling-fan/ceiling-fan-medium-command.h"
#include "gtest/gtest.h"

namespace command_pattern {

class CeilingFanTest : public testing::Test {
};

TEST_F(CeilingFanTest, BasicOperations) {
  CeilingFan ceiling_fan;
  EXPECT_EQ(ceiling_fan.GetSpeed(), CeilingFan::FanSpeed::OFF);

  ceiling_fan.High();
  EXPECT_EQ(ceiling_fan.GetSpeed(), CeilingFan::FanSpeed::HIGH);

  ceiling_fan.Medium();
  EXPECT_EQ(ceiling_fan.GetSpeed(), CeilingFan::FanSpeed::MEDIUM);

  ceiling_fan.Low();
  EXPECT_EQ(ceiling_fan.GetSpeed(), CeilingFan::FanSpeed::LOW);

  ceiling_fan.Off();
  EXPECT_EQ(ceiling_fan.GetSpeed(), CeilingFan::FanSpeed::OFF);
}

TEST_F(CeilingFanTest, CeilingFanHighCommand) {
  CeilingFan ceiling_fan;
  CeilingFanHighCommand command(&ceiling_fan);

  command.Execute();
  EXPECT_EQ(ceiling_fan.GetSpeed(), CeilingFan::FanSpeed::HIGH);

  command.Undo();
  EXPECT_EQ(ceiling_fan.GetSpeed(), CeilingFan::FanSpeed::OFF);
}

TEST_F(CeilingFanTest, CeilingFanMediumCommand) {
  CeilingFan ceiling_fan;
  CeilingFanMediumCommand command(&ceiling_fan);

  command.Execute();
  EXPECT_EQ(ceiling_fan.GetSpeed(), CeilingFan::FanSpeed::MEDIUM);

  command.Undo();
  EXPECT_EQ(ceiling_fan.GetSpeed(), CeilingFan::FanSpeed::OFF);
}

}  // namespace command_pattern