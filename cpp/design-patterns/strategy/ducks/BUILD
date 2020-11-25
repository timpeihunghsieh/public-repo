package(default_visibility = ["//visibility:public"])

cc_library(
    name = "duck",
    hdrs = ["duck.h"],
    srcs = ["duck.cc"],
    deps = [
        "//cpp/design-patterns/strategy/fly-behaviors:fly-behavior",
        "//cpp/design-patterns/strategy/quack-behaviors:quack-behavior",
    ]
)

cc_library(
    name = "mallard-duck",
    hdrs = ["mallard-duck.h"],
    deps = [
        ":duck",
        "//cpp/design-patterns/strategy/fly-behaviors:fly-with-wings",
        "//cpp/design-patterns/strategy/quack-behaviors:normal-quack",
    ]
)

cc_library(
    name = "model-duck",
    hdrs = ["model-duck.h"],
    deps = [
        ":duck",
        "//cpp/design-patterns/strategy/fly-behaviors:no-fly",
        "//cpp/design-patterns/strategy/quack-behaviors:mute-quack",
    ]
)