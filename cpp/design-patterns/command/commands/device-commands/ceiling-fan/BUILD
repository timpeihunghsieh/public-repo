package(default_visibility = ["//visibility:public"])

cc_library(
    name = "ceiling-fan",
    hdrs = ["ceiling-fan.h"],
)

cc_library(
    name = "ceiling-fan-command",
    hdrs = ["ceiling-fan-command.h"],
    deps = [
        ":ceiling-fan",
        "//cpp/design-patterns/command/commands:command"
    ]
)

cc_library(
    name = "ceiling-fan-medium-command",
    hdrs = ["ceiling-fan-medium-command.h"],
    deps = [
        "ceiling-fan-command",
    ]
)

cc_library(
    name = "ceiling-fan-high-command",
    hdrs = ["ceiling-fan-high-command.h"],
    deps = [
        "ceiling-fan-command",
    ]
)

cc_test(
    name = "ceiling-fan-test",
    size = "small",
    srcs = ["ceiling-fan-test.cc"],
    deps = [
        ":ceiling-fan",
        ":ceiling-fan-high-command",
        ":ceiling-fan-medium-command",
        "@googletest//:gtest_main",
    ],
)