package(default_visibility = ["//visibility:public"])

cc_library(
    name = "remote-control",
    hdrs = ["remote-control.h"],
    srcs = ["remote-control.cc"],
    deps = [
        "//cpp/design-patterns/command/commands:command",
        "//cpp/design-patterns/command/commands:no-command",
    ]
)

cc_test(
    name = "remote-control-test",
    size = "small",
    srcs = ["remote-control-test.cc"],
    deps = [
        ":remote-control",
        "@googletest//:gtest_main",
    ],
)