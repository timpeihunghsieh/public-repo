package(default_visibility = ["//visibility:public"])

cc_library(
    name = "light",
    hdrs = ["light.h"],
    deps = [
        "//cpp/design-patterns/command/commands:command"
    ]
)

cc_library(
    name = "light-off-command",
    hdrs = ["light-off-command.h"],
    deps = [
        ":light",
        "//cpp/design-patterns/command/commands:command"
    ]
)

cc_library(
    name = "light-on-command",
    hdrs = ["light-on-command.h"],
    deps = [
        ":light",
        "//cpp/design-patterns/command/commands:command"
    ]
)

cc_test(
    name = "light-test",
    size = "small",
    srcs = ["light-test.cc"],
    deps = [
        ":light",
        ":light-off-command",
        ":light-on-command",
        "@googletest//:gtest_main",
    ],
)