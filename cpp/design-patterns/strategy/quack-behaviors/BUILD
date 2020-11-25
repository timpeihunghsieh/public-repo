package(default_visibility = ["//visibility:public"])

cc_library(
    name = "quack-behavior",
    hdrs = ["quack-behavior.h"],
)

cc_library(
    name = "normal-quack",
    hdrs = ["normal-quack.h"],
    deps = [
      ":quack-behavior",
    ]
)

cc_library(
    name = "squeak",
    hdrs = ["squeak.h"],
    deps = [
      ":quack-behavior",
    ]
)

cc_library(
    name = "mute-quack",
    hdrs = ["mute-quack.h"],
    deps = [
      ":quack-behavior",
    ]
)
