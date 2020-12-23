package(default_visibility = ["//visibility:public"])

cc_binary(
    name = "remote-loader-main",
    srcs = ["remote-loader-main.cc"],
    deps = [
      "//cpp/design-patterns/command/remote-control:remote-control",
      "//cpp/design-patterns/command/commands/device-commands/garage-door:garage-door-up-command",
      "//cpp/design-patterns/command/commands/device-commands/garage-door:garage-door-down-command",
      "//cpp/design-patterns/command/commands/device-commands/light:light-off-command",
      "//cpp/design-patterns/command/commands/device-commands/light:light-on-command",
    ],
)