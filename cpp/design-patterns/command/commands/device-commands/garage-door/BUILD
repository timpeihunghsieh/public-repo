package(default_visibility = ["//visibility:public"])

cc_library(
    name = "garage-door",
    hdrs = ["garage-door.h"],
    deps = [
        "//cpp/design-patterns/command/commands:command"
    ]
)

cc_library(
    name = "garage-door-up-command",
    hdrs = ["garage-door-up-command.h"],
    deps = [
        ":garage-door",
        "//cpp/design-patterns/command/commands:command"
    ]
)

cc_library(
    name = "garage-door-down-command",
    hdrs = ["garage-door-down-command.h"],
    deps = [
        ":garage-door",
        "//cpp/design-patterns/command/commands:command"
    ]
)

cc_test(
    name = "garage-door-test",
    size = "small",
    srcs = ["garage-door-test.cc"],
    deps = [
        ":garage-door",
        ":garage-door-down-command",
        ":garage-door-up-command",
        "@googletest//:gtest_main",
    ],
)